//---------------------------------------------------------------------------

#ifndef USMPilaH
#define USMPilaH

//---------------------------------------------------------------------------
#include <iomanip>
#include <iostream>
#include "SMemoria.h"
using namespace std;

typedef int tipo_elemento;

struct Nodo
{
    tipo_elemento elemento;
    direccion_memoria sig;
};

class USMPila
{
  private:
    CSMemoria memoria;
    direccion_memoria tope;
  public:
    USMPila();
    bool vacia();
    void meter(tipo_elemento E);
    void Sacar(tipo_elemento &E);
    tipo_elemento cima();
};

#endif

