//---------------------------------------------------------------------------

#ifndef UArchivosTextoH
#define UArchivosTextoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.ImageList.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
	int MAX;
//	char Laberinto[MAX][MAX];
	byte m,n; // para la dimensión de la matriz del mapa de bits
	int x,y; //las coordenadas del hámster
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TImageList *ImageList1;
	TOpenTextFileDialog *OpenTextFileDialog1;
	TMenuItem *Cargar;
	TMenuItem *Probar1;
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	void Cargar(); //carga el mapa de bits a partir del archivo txt
	bool BackTrack(); //recorre el laberinto buscando la salida. TRUE si lo encuentra.
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
