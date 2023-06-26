//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unumeros.h"
//#include "iostream"
//#include "string"
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
byte MayorD(Cardinal x)//253
{byte m;
	if(x==0){
	 m = x;
	}else{
	ShowMessage(IntToStr(m));
//  ShowMessage(IntToStr(x));
	m=MayorD(x/10);
		if(x%10>m){
		m=x%10;
		}
	}
  return m;
}

int Dstr(String x){
	  return StrToInt(x);
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Edit2->Text = MayorD(Dstr(Edit1->Text));
}
//---------------------------------------------------------------------------
