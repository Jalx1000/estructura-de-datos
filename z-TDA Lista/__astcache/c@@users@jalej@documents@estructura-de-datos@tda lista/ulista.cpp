//---------------------------------------------------------------------------

#pragma hdrstop

#include "ULista.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

LLista::Lista(){
	longitud = 0;
    Ptr_Elementos = NULL;
}

Direccion LLista::fin(){
	if(!vacia()){
		cout<<"lista vacia"<<;
	}else{
		x=Ptr_Elementos;
		while(x<>NULL){
			Ptr_Fin=x;
			x=
		}
		return Ptr_Fin;
	}
}
