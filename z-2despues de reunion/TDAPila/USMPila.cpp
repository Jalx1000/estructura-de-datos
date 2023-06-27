//---------------------------------------------------------------------------

#pragma hdrstop

#include "USMPila.h"
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)

USMPila::USMPila()
{
    tope = NULO;
}

bool USMPila::vacia()
{
    return tope == NULO;
}

void USMPila::meter(tipo_elemento E)
{
    direccion_memoria aux = memoria.new_spacio("");
    if (aux != NULO) {
        memoria.poner_dato(aux, "->elemento", E);
        memoria.poner_dato(aux, "->sig", tope);
        tope = aux;
    } else {
        cout << "Error: Memoria insuficiente" << endl;
    }
}

void USMPila::Sacar(tipo_elemento &E)
{
    if (vacia()) {
        cout << "Error: La Pila esta vacia" << endl;
    } else {
        direccion_memoria x = tope;
        E = memoria.obtenerDato(tope, "->elemento");
        tope = memoria.obtenerDato(tope, "->sig");
        memoria.Delete_espacio(x);
    }
}

tipo_elemento USMPila::cima()
{
    if (vacia()) {
        cout << "Error: La Pila esta vacia" << endl;
        return -1;
    } else {
        return memoria.obtenerDato(tope, "->elemento");
    }
}

