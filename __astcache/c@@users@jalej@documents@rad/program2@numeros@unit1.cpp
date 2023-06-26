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
byte MayorD(Cardinal x)
{byte m;
	if(x==0){
	 m = x;
	}else{
	 m = Mayor(x/10);
	}
	return m;
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
    Edit2->Text=MayorD(Edit1->Text);
}
//---------------------------------------------------------------------------
