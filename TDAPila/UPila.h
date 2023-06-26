//---------------------------------------------------------------------------

#ifndef UPilaH
#define UPilaH
#include "UCSMemoria.cpp"
//---------------------------------------------------------------------------

typedef int tipoElemento;

class Pila{
	private:

	public:
	Pila();
	bool vacia();
	void Meter(tipoElemento e);
	void sacar(tipoElemento e,tipoElemento ES);
	tipoElemento cima();
};
#endif
