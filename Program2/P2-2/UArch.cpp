//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UArch.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1* Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner) : TForm(Owner) {}

void TForm1::Mostrar(RegAlumno reg)
{
    Edit1->Text = reg.cod;
    Edit2->Text = reg.nom;
    Edit3->Text = reg.dir;
    MaskEdit1->Text =
        IntToStr(reg.fecha.dia) + "/" + reg.fecha.mes + "/" + reg.fecha.año;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject* Sender)
{
    nomArch = "Alumnos.dat"; //ios::in = lectura | ios::out = escritura
    fstream fd(nomArch.c_str(), ios::in | ios::binary);
    if (fd.fail())
        fstream fd(nomArch.c_str(), ios::out | ios::binary);
    fd.close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject* Sender)
{
	bool hallado = false;
	RegAlumno reg;
	Word codi;
	codi = StrToInt(Edit1->Text);
	fstream f(nomArch.c_str(), ios::in | ios::binary);
	if (f.is_open()) {
		do { //busca el codigo en el archivo
			f.read((char*)&reg, sizeof(reg));
			hallado = (reg.cod == codi);
        } while (!hallado && !f.eof());
        if (hallado) { //si lo encuentra, pone los datos en pantalla
            Edit2->Text = reg.nom;
            Edit3->Text = reg.dir;
            MaskEdit1->Text = IntToStr(reg.fecha.dia) + '/' +
                              IntToStr(reg.fecha.mes) + '/' +
                              IntToStr(reg.fecha.año);
            Edit2->SetFocus();
        } else { //sino, limpia la pantalla
            Edit2->Text = "";
            Edit3->Text = "";
            MaskEdit1->Text = "";
        }
    }
    f.close();
}

//---------------------------------------------------------------------------


