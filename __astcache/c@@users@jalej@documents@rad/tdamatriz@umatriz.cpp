//---------------------------------------------------------------------------

#pragma hdrstop

#include "UMatriz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

MatrizDisperza::MatrizDisperza(){
	df=0;
	dc=0;
	repe=0;
	nt=0;
}

void MatrizDisperza::dimensionar(int nf,int nc){
	df=nf;
	dc=nc;
}

int MatrizDisperza::dimension_Fila(){
	return df;
}

int MatrizDisperza::dimension_columna(){
	return dc;
}

void MatrizDisperza::poner(indice f,indice c,elemento e){
    int Lug=1;
//	Lug=//Buscar en vectori vf,vc los valores f y c y retornar indice
	if(Lug>0){
		Vd[lug]=0;
	}else if(nt<MAX){
		nt=nt+1;
		vd[nt]=e vf[nt] = f vc[nt]=c;
	}else{
		cout<<"No existe espacio"<<"\n";
    }
}

tipo_elemento MatrizDisperza::Elemento(indice f, indice c){
	if(f>=1 y f<=df) && (c>=1 && c<=dc){
//        lug=;
		if(lug>0){
			return vd[lug];
		}else{
			return repe;
        }
	}else{
		cout<<"Erorr: fuera de rango de indices"<<"\n";
    }
}

void MatrizDisperza::definir_valor_repetido(int valor){
	repe=valor;
	 // este algoritmo no considera si este método es llamado en tiempo de ejecución    complemente el código.
}