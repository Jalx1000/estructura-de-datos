//---------------------------------------------------------------------------

#pragma hdrstop

#include "UVPila.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <iomanip>
#include <iostream>
using namespace std;

UVPila::UVPila()
{
    Tope = 0;
}

bool UVPila::Vacia()
{
    return Tope == 0;
}

void UVPila::Meter(tipo_elemento E)
{
    if (Tope < MAX) {
        Tope = Tope + 1;
        elementos[Tope] = E;
    }
}

void UVPila::Sacar(tipo_elemento& E)
{
    if (!Vacia()) {
        E = elementos[Tope];
        Tope = Tope - 1;
    } else {
        cout << "error" << endl;
    }
}

tipo_elemento UVPila::cima(){
	if(!Vacia()){
		return elementos[Tope];
	}
}

void UVPila::MostrarPila(const UVPila& pila) {
    UVPila copiaPila = pila;  // Creamos una copia de la pila para no modificarla

	cout << "Elementos de la pila: ";
	while (!copiaPila.Vacia()) {
		tipo_elemento elemento;
		copiaPila.Sacar(elemento);
		cout << elemento << " ";
	}
	cout << endl;
}

