//---------------------------------------------------------------------------

#pragma hdrstop

#include "UMatrizV.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iomanip>

/*
		int *Vf;                        // filas
		int *VC;                       // Columnas
		int *VD;				    // elementos
		int df;                     // Dimensión
		int dc;
		int repe; 				// es el elemento que se repetirá en la matriz
		int nt;
*/

MatrizDispersa::MatrizDispersa(){
	df=0;
	dc=0;
	repe=0;
	nt =0;
	Vf=new int[df*dc];
	Vc=new int[dc*df];
	Vd=new int[df+1];
	for (int i = 1; i < df+1; i++) {
        Vf[i]=1;
	}
}

void MatrizDispersa::dimensionar(int nf,int nc){
	df=nf;
	dc=nc;
}

int MatrizDispersa::dimension_fila()
{
	return df;
}

int MatrizDispersa::dimension_columna()
{
	 return dc;
}

void MatrizDispersa::poner(f,c: entero; e: Elemento)
{
   Lug = // Buscar en vector vf,vc los valores f y c y retornar indice

   if (lug>0){
	vd[lug]=e;
   }
	lug>0 entonces vd[ lug ] = e

			si vd[lug]=rep entonces // desplazar

			caso contrario

			   si nt< MAX entoces

							nt = nt +1

							vd[ nt ] = e vf[ nt ] = f vc[ nt ] = c

						  caso contrario

							// error no existe espacio

}
