//---------------------------------------------------------------------------

#ifndef UCSMemoriaH
#define UCSMemoriaH
#include <string>
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
typedef int direccion_memoria;
const int MAX=11;
const int NULO=-1;

struct Nodo{
	int dato;
	string id;
	direccion_memoria link;
};

class CSMemoria{
	private:
	Nodo* mem;
	direccion_memoria libre;
	public:
	CSMemoria();
    void mostrar_memoria();
};
#endif
