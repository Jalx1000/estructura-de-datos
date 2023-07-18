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
   Edit1->Text=reg.codigo;
   reg.nombre[20] = '\0';
   Edit2->Text=reg.nombre;
   Edit3->Text=reg.dirección;
   MaskEdit1->Text=IntToStr(reg.fecha.dia)+"/"+reg.fecha.mes+"/"+reg.fecha.año;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	nomArch="Alumnos.dat";
	fstream fd(nomArch.c_str(),ios::in|ios::binary);
	if (fd.fail())
		fstream fd(nomArch.c_str(),ios::out|ios::binary);
	fd.close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Exit(TObject *Sender)
{
	RegAlumno reg;
	bool hallado;
	Word codi;
	fstream fd(nomArch.c_str(),ios::in|ios::binary);
	if (!fd.fail()) {
		hallado=false;
		codi=StrToInt(Edit1->Text);
		while(!fd.eof()&&!hallado){
			fd.read((char*)&reg,sizeof(reg));
			if (!fd.eof()) {
				hallado = (codi==reg.codigo)&&(reg.marca==0);
			}
		}
		if (hallado) {
			Mostrar(reg);
		} else {
			Edit2->Text="";
			Edit3->Text="";
			MaskEdit1->Text="";    	
		}
	}
	fd.close();	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	RegAlumno reg,regNuevo; bool hallado;  AnsiString aux;
	regNuevo.codigo=StrToInt(Edit1->Text);
	aux=Edit2->Text;
	strcpy(regNuevo.nombre,aux.c_str());
	aux=Edit3->Text;
	strcpy(regNuevo.dirección,aux.c_str());
	aux=MaskEdit1->Text;
	regNuevo.fecha.dia=StrToInt(aux.SubString(1,2));
	regNuevo.fecha.mes=StrToInt(aux.SubString(4,2));
	regNuevo.fecha.año=StrToInt(aux.SubString(7,4));
    regNuevo.marca = 0;
	pf=new fstream(nomArch.c_str(),ios::in|ios::out|ios::binary);
	if (!pf->fail()) {
		hallado=false;
		while (!pf->eof()&&!hallado){
			pf->read((char *)&reg,sizeof(reg));
			if (!pf->eof()) {
				hallado= (reg.codigo==regNuevo.codigo)&&(regNuevo.marca==0);
			}
		}                     
		if (hallado) {//actualizar
			pf->seekg(-sizeof(reg),ios::cur);
			pf->write((char*)&regNuevo,sizeof(regNuevo));
		}else{//agregar
			pf->close(); delete(pf);
			pf=new fstream(nomArch.c_str(),ios::app|ios::binary);
			pf->write((char *)&regNuevo,sizeof(regNuevo));
		}
		pf->close();
		delete(pf);

		Edit2->Text="";
		Edit3->Text="";
		MaskEdit1->Text="";
		Edit1->Text="";
		Edit1->SetFocus();
  }
	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
    RegAlumno reg;//nueva estructura
	RegAlumno2 reg2;//antigua estructura	fstream fi(nomArch.c_str(),ios::in|ios::binary);	fstream fo("temporal.tmp",ios::out|ios::binary);	if (!fi.fail()) {		while(!fi.eof()){		fi.read((char*)&reg2,sizeof(reg2));			if (!fi.eof()) {			  reg.codigo=reg2.codigo;			  strcpy(reg.nombre,reg2.nombre);			  strcpy(reg.dirección,reg2.dirección);			  reg.fecha=reg2.fecha;			  reg.marca=0;			  fo.write((char*)&reg,sizeof(reg));			}		}	}	fi.close();	fo.close();	remove(nomArch.c_str());	rename("temporal.tmp",nomArch.c_str());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
    RegAlumno reg;
	fstream f(nomArch.c_str(),ios::in|ios::out|ios::binary);	Word codi=StrToInt(Edit1->Text);	boolean hallado=false;	if (!f.fail()) {		while (!f.eof()&&!hallado){			f.read((char*)&reg,sizeof(reg));			if (!f.eof()) {				hallado= (codi==reg.codigo)&&(reg.marca==0);			}		}		if (hallado) {			reg.marca=1;			f.seekg(-sizeof(reg),ios::cur);			f.write((char*)&reg,sizeof(reg));			Edit1->Text="";			Edit2->Text="";			Edit3->Text="";			MaskEdit1->Text="";			Edit1->SetFocus();		}	}	f.close();
}
//---------------------------------------------------------------------------

