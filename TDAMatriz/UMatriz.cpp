//---------------------------------------------------------------------------

#pragma hdrstop

#include "UMatriz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

MatrizDisperza::MatrizDisperza(){
	df=dc=repe=nt=0;
	Vf=new int[df*dc]; // filas
	Vc=new int[df*dc]; // Columnas
	Vd=new int[df+1]; // elementos
	for(int i=0;i<df+1;i++){ //0<1
		  Vf[i]=1;   //V[0]=1
	}
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
	int Lug=existe_elemento(f,c);
//	Lug=//Buscar en vectori vf,vc los valores f y c y retornar indice
	if(Lug>0){
		Vd[Lug]=0;
	}else if(nt<MAX){
		nt=nt+1;
		Vd[nt]=e;
		Vf[nt]=f;
		Vc[nt]=c;
	}else{
		cout<<"No existe espacio"<<"\n";
    }
}

tipo_elemento MatrizDisperza::Elemento(indice f, indice c){
	if((f>=1 && f<=df) && (c>=1 && c<=dc)){
		int lug=0;
		if(lug>0){
			return Vd[lug];
		}else{
			return repe;
        }
	}else{
		cout<<"Erorr: fuera de rango de indices"<<"\n";
    }
}

void MatrizDisperza::definir_valor_repetido(int valor){
	repe=valor;
	 // este algoritmo no considera si este m�todo es llamado en tiempo de ejecuci�n    complemente el c�digo.
}

//tengo que buscar en el vector fila si no hay un dato de por medio con el dato de entrada para no sobreescribirlo
//lo mismo con el vector columna pero si no encuentra retorna 0;
int retorna_indice(){
	return 0;
}

//AUXS

int existe_elemento(int f,int c){

}