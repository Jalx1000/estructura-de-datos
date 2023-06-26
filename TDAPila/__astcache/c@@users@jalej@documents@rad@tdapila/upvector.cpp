﻿//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

PVector::PVector(){
	Tope=max-1;
	for(int i=max-1; i<=0 ; i++){
		v[i]=0;
	}
}

bool PVector::Vacia(){
	return Tope == max;
}

void PVector::Meter(elemento e){
	for(int i=max-1; i > 0;i--){
		v[i-1]=v[i];
	}
}

void PVector::Sacar(elemento &e){
	if(!Vacia()){
		e = v[Tope+1];
	}
}

elemento PVector::Cima(){
	int num;
	if(!Vacia()){
		num=v[Tope+1];
	}
    return num;
}