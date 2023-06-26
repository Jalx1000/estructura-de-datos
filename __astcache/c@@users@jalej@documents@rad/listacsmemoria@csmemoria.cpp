//---------------------------------------------------------------------------

#pragma hdrstop

#include "CSMemoria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

#include <iomanip>
#include <sstream>
#include <iostream>


CSMemoria::CSMemoria(){
	mem = new NodoM[MAX_MEMORIA];

	for (int i  = 0; i < MAX_MEMORIA; i++) {
		mem[i].dato = 0;
		mem[i].link = i+1;
	}
	mem[MAX_MEMORIA].link = -1;
	libre = 0;
}

int Numero_lds(string cadena){
  int cont = 0;
  for( int i = 0; i < cadena.length() ; i++ ){
	if(cadena[i] == ','){			                                       	
		cont ++;
	}
  }

  cont += cadena.empty() ? 0 : 1;
  return cont;
}

string Obtener_id( string cadena, int n ){
	string palabra = "";
	int contador = 0;
	int i = 0;

	while ( ( contador = n-1 ) && ( i < cadena.length()-1 ) ) {
		if( cadeana.at(i) == ','){
			contador+=1;
			cadena = cadena.substr(i+1,cadena.length()-(cadena.substr(0,i).length()));
			i=-1;
		}
		i+=1;
	}
	i=0;
	while(cadena[i]!=',' && i<cadena.length()){
			i+=1;
	}
	palabra = cadena.substr(0,i);

	return palabra;
}

direccion_mem CSMemoria::new_espacio(string cadena){
	int cant = Numero_lds(cadena);
	int dir = libre;
	int d = libre;

		for (i = 1; i <= cant-1 ; i++) {
			mem[d].id id = Obtener_id( cadena,i );
			d=mem[d].link;             
		}

		libre = mem[d].link;
		mem[d].link = -1;
		mem[d].id = Obtener_id( cadena, cant );
		return dir;
							
}

void CSMemoria::mostrar(){
	stringstream oc;
	stringstream lb;
	oc<<"        OCUPADOS         \n"<< 
		"+---------------------- +\n"<<
		"|DIR|"<<"DATO|"<<"---ID----|"<<"LINK|\n"<<setfill(' ');
	string ocupados;
	lb<<"          LIBRES         \n"<<
		"+---------------------- +\n"<<
		"|DIR|"<<"DATO|"<<"---ID----|"<<"LINK|\n";
	string libres;

	for( int i = 0 ; i < MAX_MEMORIA; i++){
		if(dir_libre(i)){
			lb<<"|"<<setw(3)<<i<<"|"<<setw(4)<<
			mem[i].dato<<"|"<<setw(9)<<mem[i].id<<
			"|"<<setw(4)<<mem[i].link<<"|\n";

		}
		if(!(dir_libre(i))){
			oc<<"|"<<setw(3)<<i<<"|"<<setw(4)<<
			mem[i].dato<<"|"<<setw(9)<<mem[i].id<<
			"|"<<setw(4)<<mem[i].link<<"|\n";

		}
	}

	oc<<"+-----------------------+\n";
	lb<<"+-----------------------+\n";
	cout<<oc.str()<<lb.str();
	cout<<"+\n";
	cout<<"LIBRE:"<<libre<<"\n";
	cout<<"ESPACIO DISPONIBLE:"<<Espacio_disponible()<<"\n";
	cout<<"ESPACIO OCUPADO:"<<Espacio_ocupado();

}