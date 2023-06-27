#include <iostream>
#include "CSMemoria.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//constructor
	CSMemoriakeor *MiMemkeor = new CSMemoriakeor();
	//MiMemkeor->mostrar_memoria();
	int x = MiMemkeor->new_espacio("Juan,Perez");
	cout << "\nLa x es: "<<x<<endl;

	MiMemkeor->mostrar_memoria();
	cout<<"cargar Juan Perez \n";
   //	MiMemkeor->poner_dato(x, "->uno",100);
	int y = MiMemkeor->new_espacio("40253");
		//MiMemkeor->mostrar_memoria();
	//MiMemkeor->delete_espacio(x);
	cout << "\nLa y es: "<<y<<endl;
	int z = MiMemkeor->new_espacio("INF220,SA");
		//MiMemkeor->mostrar_memoria();
		cout << "\nLa z es: "<<z<<endl;
	MiMemkeor->poner_dato(y,"->40253",100);
	MiMemkeor->delete_espacio(y);
	MiMemkeor->mostrar_memoria();
   //	MiMemkeor->poner_dato(z,"->karol", MiMemkeor->obtenerDato(z,"->karol")-2);
	//MiMemkeor->mostrar_memoria();

	 system("PAUSE");
	return 0;
}

