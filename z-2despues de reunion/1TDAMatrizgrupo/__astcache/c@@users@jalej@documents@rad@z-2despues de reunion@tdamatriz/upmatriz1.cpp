﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPMatriz1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

PMatriz1::PMatriz1(){
	dimf=0;
	dimc=0;
	rep=0;
	PtrMatD = NULL;
}

void PMatriz1::dimensionar(int nf,int nc){
	dimf = nf;
	dimc = nc;
}

int PMatriz1::dimension_Fila(){
	return dimf;
}

int PMatriz1::dimension_columna(){
	return dimc;
}

void PMatriz1::poner(indice f,indice c,elemento valor){
}

int PMatriz1::Elemento(int f,int c){
	if((f>=1 && f<=dimf) && (c>=1 && c<=dimc)){
		dir = 0;
		if(dir != NULL){
			return dir->dato;
		}else{
			return rep;
        }

	}
}

void PMatriz1::definir_valor_repetido(elemento valor){
	rep=valor;

}
