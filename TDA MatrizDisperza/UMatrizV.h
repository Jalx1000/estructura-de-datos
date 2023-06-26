//---------------------------------------------------------------------------

#ifndef UMatrizVH
#define UMatrizVH
//---------------------------------------------------------------------------
#include <string>
#include <iostream>
using namespace std;

class MatrizDispersa
{
	private:
		int *Vf;                        // filas
		int *VC;                       // Columnas
		int *VD;				    // elementos
		int df;                     // Dimensi�n
		int dc;
		int repe; 				// es el elemento que se repetir� en la matriz
		int nt;
	public:
		void MatrizDisperza();
		void dimensionar(int df,int dc);
		int dimension_Fila();
		int dimension_columna();
		void poner(int f,int c,int valor);
		int Elemento(int f,int c);
		void definir_valor_repetido(int valor);
		string Mostrar();
};

#endif