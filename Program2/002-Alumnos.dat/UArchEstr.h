//---------------------------------------------------------------------------

#ifndef UArchEstrH
#define UArchEstrH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Mask.hpp>
#include <fstream>
//---------------------------------------------------------------------------
struct TFecha {
	byte dia;
	byte mes;
	Word año;
};
struct RegAlumno {
	Word codigo;
	char nombre[21];
	char dirección[21];
	TFecha fecha;
};
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TMaskEdit *MaskEdit1;
	TButton *Button4;
	TButton *Button5;
	TButton *Button6;
	TButton *Button7;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Edit1Exit(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
    AnsiString nomArch;
	fstream *pf; //puntero al archivo de datos	fstream *pfi;//puntero al archivo indice
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
    //__fastcall TForm1::FormCreate(TObject *Sender);
	void Mostrar(RegAlumno reg);
    void Ordenar(AnsiString ArchIdx);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
