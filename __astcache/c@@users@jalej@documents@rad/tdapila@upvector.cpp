//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

PVector::PVector(){
	tope=max-1;
	for(int i=max-1; i<=0 ; i++){
		v[i]=0;
	}
}

bool Pila::Vacia(){
	return tope = max;
}

void Pila::Meter(elemento e){
	for(int i=max-1; i > 0;i--){
		v[i-1]=v[i];
	}
}

void Pila::Sacar(elemento &e){
	if(!vacia()){
		e = v[Tope+1];
	}
}

elemento Pila::Cima(){
	if(!vacia()){
	   return v[Tope+1];
	}
}