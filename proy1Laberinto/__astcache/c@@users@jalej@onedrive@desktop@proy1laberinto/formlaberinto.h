//---------------------------------------------------------------------------

#ifndef formLaberintoH
#define formLaberintoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <System.ImageList.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>

#include <fstream>
#include <iostream>
//---------------------------------------------------------------------------
class TForm1 : public TForm {
	__published :  // IDE-managed Components
                   TImageList *ImageList1;
    TMainMenu *MainMenu1;
    TOpenTextFileDialog *OpenTextFileDialog1;
	TMenuItem *Cargar1;
	TMenuItem *Probar1;
	TMenuItem *Verificar1;

	void __fastcall Cargar1Click(TObject *Sender);
	void __fastcall Probar1Click(TObject *Sender);
	void __fastcall Verificar1Click(TObject *Sender);

   private:  // User declarations
    char Laberinto[100][100];
	byte m, n;  // para la dimension de la matriz del mapa de bits
	int x, y;   // las coordenadas del hamster
   public:      // User declarations
    __fastcall TForm1(TComponent *Owner);
    void Cargar(String nom);                        // carga el mapa de bits a partir del archivo txt
    bool BackTrack(char Lab[][100], int x, int y);  // recorre el laberinto buscando la salida.
													// TRUE si lo encuentra.
   bool isValidChar(char c);
   void verificar(String nom);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
