//---------------------------------------------------------------------------

#ifndef VListaH
#define VListaH
#include <string>
#include <iostream>
//---------------------------------------------------------------------------

const int max=10;
int Nulo = 0;
typedef int Dir;

class VLista{
	private:
		int v[max];
		int longitud;
	public:
	VLista();
	Dir fin();
	Dir primero();
	Dir siguiente(int dir);
	Dir anterior(int dir);
	bool vacia();
	int recupera(int dir);
	int Longitud();
	void inserta(int dir, int elemento);
	void insertaPrimero(int elemento);
	void insertaUltimo(int elemento);
	void suprime(int dir);
	void modifica(int dir,int elemento);
//	string toStr();
};

#endif
