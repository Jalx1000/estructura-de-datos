//---------------------------------------------------------------------------

#ifndef UPMatriz1H
#define UPMatriz1H
#include "CSMemoria.h"
//---------------------------------------------------------------------------
typedef int indice;
typedef NodoM Direccion;
typedef int elemento;

struct Nodo
{
    int Fila;
    int Col;
    int dato;
    Nodo* Sig;
};

class PMatriz1
{
  private:
    Nodo* PtrMatD;
    int rep, dimf, dimc;
  public:
    PMatriz1();
    void dimensionar(int df, int dc);
    int dimension_Fila();
    int dimension_columna();
	void poner(indice f, indice c, elemento valor);
    int Elemento(indice f, indice c);
    void definir_valor_repetido(elemento valor);
};
#endif

