//---------------------------------------------------------------------------

#pragma hdrstop

#include "UPila.h"
#include "UCSMemoria.cpp"
#include "UCSMemoria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Pila::Pila(){
	tope=-1;
}

void Pila::Meter(tipoElemento e){

	aux= // Pedir Espacio de memoria para Nodo

	if(aux<>Nulo){
		 ponerdato(aux,’->elemento’,E)
		 ponerdato(aux,’->sig’,Tope)
		 tope = Aux;
	}else{
		cout<<"Erro"<<"\n"<<
	}
}

tipoElemento Pila::cima(){
	vacia() ? (cout<<"error\n"<<) : obtenerdato(Tope,’->elemento’)
//	if(vacia()){
//
//	}else{
//
//	}
//	 Si(vacia()) Entoces  // Error
//		 caso contrario
//			 return
}

void Pila::sacar(tipoElemento e,tipoElemento ES){
	 if(vacia()){
	   cout<<"error\n"<<endl;
	 }else{
		x=tope
		E=obtenerdato(Tope,’->elemento’)
		Tope = obtener_dato(tope,’->sig’)
		Delete_espacio(x)
     }
}

