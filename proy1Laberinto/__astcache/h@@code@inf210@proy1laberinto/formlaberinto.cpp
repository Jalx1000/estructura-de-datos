//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "formLaberinto.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1* Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner) {
}
//---------------------------------------------------------------------------
void TForm1::Cargar(String nom) {
    byte i, j;
    char img;
    ifstream pf(nom.c_str());
    if (!pf.fail()) {  // si logró abrir el archivo
        i = 0;
        j = 0;
        while (!pf.eof()) {
            img = pf.get();
            Laberinto[j][i] = img;
            switch (img) {
                case '#':
                    ImageList1->Draw(Canvas, j * 40, i * 40, 0);
                    break;
                case 'h':
                    ImageList1->Draw(Canvas, j * 40, i * 40, 2);
                    x = j;
                    y = i;
                    break;
                case 'p':
                    ImageList1->Draw(Canvas, j * 40, i * 40, 1);
                    break;
                case 10:
                    n = j;
                    i++;
                    j = 255;
                    break;
            }
            j++;
        }
        m = i;
        Height = (m + 2) * 40 + 22;
        Width = n * 40 + 17;
        pf.close();
    }
}

bool TForm1::BackTrack(char Lab[][100], int x, int y) {
    bool haySalida = false;
    byte nc;
    char d;
    char caminos[4];
    nc = 0;
    if ((Lab[x + 1][y] == ' ') || (Lab[x + 1][y] == 'p'))  // si hay camino a la derecha
        caminos[nc++] = '6';
    if ((Lab[x - 1][y] == ' ') || (Lab[x - 1][y] == 'p'))  // si hay camino a la izquierda
        caminos[nc++] = '4';
    if ((Lab[x][y - 1] == ' ') || (Lab[x][y - 1] == 'p'))  // si hay camino arriba
        caminos[nc++] = '8';
    if ((Lab[x][y + 1] == ' ') || (Lab[x][y + 1] == 'p'))  // si hay camino abajo
        caminos[nc++] = '2';
    while ((nc > 0) && (!haySalida)) {
        nc--;
        d = caminos[nc];
        Lab[x][y] = '+';                              // camino pisado
        ImageList1->Draw(Canvas, x * 40, y * 40, 3);  // borra al hamster
        switch (d) {
            case '4':
                x--;
                break;
            case '6':
                x++;
                break;
            case '8':
                y--;
                break;
            case '2':
                y++;
                break;
        }
        ImageList1->Draw(Canvas, x * 40, y * 40, 2);  // dibuja al hamster
        Sleep(100);
        if (Lab[x][y] == 'p')
            haySalida = TRUE;
        else {
            haySalida = BackTrack(Lab, x, y);
            if (!haySalida) {                                 // back track
                ImageList1->Draw(Canvas, x * 40, y * 40, 3);  // borra al hamster
                switch (d) {
                    case '4':
                        x++;
                        break;
                    case '6':
                        x--;
                        break;
                    case '8':
                        y++;
                        break;
                    case '2':
                        y--;
                        break;
                }
                ImageList1->Draw(Canvas, x * 40, y * 40, 2);  // dibuja al hamster
                Sleep(100);
            }
        }
    }
    return haySalida;
}

//---------------------------------------------------------------------------
void __fastcall TForm1::Cargar1Click(TObject* Sender) {
    if (OpenTextFileDialog1->Execute()) {
        Cargar(OpenTextFileDialog1->FileName);
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Probar1Click(TObject* Sender) {
    BackTrack(Laberinto, x, y);
}
//---------------------------------------------------------------------------
