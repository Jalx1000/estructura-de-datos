//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UArchEstr.h"
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
void TForm1::Mostrar(RegAlumno reg)
{
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	nomArch="Alumnos.dat";
	fstream fd(nomArch.c_str(),ios::in|ios::binary);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Exit(TObject *Sender)
{
	RegAlumno reg;
	bool hallado;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	RegAlumno reg,regNuevo; bool hallado;  AnsiString aux;
	regNuevo.codigo=StrToInt(Edit1->Text);
		if (hallado) {//actualizar
}
//---------------------------------------------------------------------------