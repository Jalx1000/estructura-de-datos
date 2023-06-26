//---------------------------------------------------------------------------

#pragma hdrstop

#include "ULists_Sim.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <iomanip>
#include <sstream>
#include <iostream>

ListaS::ListaS(){
		longit = 0;
		ptr_elementos = NULO;
		mem = new CSMemoria();
}

ListasS::Listas(CSMemoria* m){
	ptr_elementos=NULO;
	longit=0;
	mem=m
}

/*
lista.inserta_primero( E TipoElemento)
Inicio // x tendria direcion de memoria si existe espacio
x=M.New_espacio(‘elemento,sig’)
si x <> nulo entonces
inicio
m.poner_dato(x,
’->elemento’
,E)
m.poner_dato(x,
’->sig’
,PtrElementos)
longitud=longitud + 1
PtrElementos = x
fin
caso contrario // llamar a exception existeespaciomemoria
Fin
*/

void ListaS::inserta_primero(int e){

}

