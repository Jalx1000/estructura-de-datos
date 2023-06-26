//---------------------------------------------------------------------------

#ifndef UMatrizH
#define UMatrizH
//---------------------------------------------------------------------------
#include <string>
#include <iostream>
using namespace std;

typedef int indice;
typedef int elemento;
typedef int tipo_elemento;

class MatrizDisperza{

	private:
	int *Vf;
	int *Vc;
	int *Vd;
	int df,dc;
	int repe;
	int nt;
    int MAX=10;

	public:
	MatrizDisperza();
	void dimensionar(int df,int dc);
	int dimension_Fila();
	int dimension_columna();
	void poner(indice f,indice c,elemento valor);
	tipo_elemento Elemento(indice f,indice c);
	void definir_valor_repetido(elemento valor);
	string mostrar();
};
#endif