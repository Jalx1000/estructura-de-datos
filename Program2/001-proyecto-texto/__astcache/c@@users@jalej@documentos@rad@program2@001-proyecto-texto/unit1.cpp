//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void CargarV(AnsiString nomA,TStringGrid *v)
{
	char nom[30];  char x; Word i;
	strcpy(nom,"my-text.txt");
	ifstream f(nomA.c_str()); i=0;
	if (!f.fail()) {
		while (!f.eof()) {
		  x=f.get();
		  if (!f.eof()) {//si no leyó la marca de EOF
			 if (x!=10) {//si no es EOL
				 //Word z=x;
				 v->Cells[i][0]=IntToStr(x);
				 i++;
			 }
		  }
		}
		v->ColCount=i;
	}
	f.close();
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	AnsiString nomArch;
	if (OpenTextFileDialog1->Execute()) {
		CargarV(OpenTextFileDialog1->FileName,StringGrid1);
	}
}
//---------------------------------------------------------------------------
bool EsVocal(char c)
{ AnsiString voc="aeiouAEIOUáéíóúÁÉÍÓÚÜü";
  return voc.Pos(c)>0;
}
Cardinal CantVoc(AnsiString NomArch)
{ Cardinal c; char x;
  ifstream f(NomArch.c_str());
  c=0;
  if (!f.fail()) {
	 while (!f.eof()){
	   x=f.get();
	   if (!f.eof()) {
		  if (EsVocal(x)) {
			  c++;
		  }
	   }
	 }
  }
  f.close();
  return c;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	AnsiString nomArch;
	if (OpenTextFileDialog1->Execute()) {
		Edit2->Text=CantVoc(OpenTextFileDialog1->FileName);
	}
}
//---------------------------------------------------------------------------
