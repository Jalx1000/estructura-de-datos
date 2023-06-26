#include <iostream>
#include <CSMemoria.h>
//#include <CSMemoria.cpp>
#include <ULists_Sim.h>
int main(){
	CSMemoria* MiMemoria;

	ListaS* L;
//	constructores
	MiMemoria = new CSMemoria();
	cout<< "\nLa memoria ---------------------"<<endl;
//	MiMemoria->mostrar();

	L = new ListaS(MiMemoria);
	cout<< "\nFin memoria ---------------------"<<endl;
//	cout<< "\n Lista"<<L->to_str()<<endl;

	int z = MiMemoria->new_espacio("javier.alejandro.mogro.penafiel");
//	MiMemoria->mostrar();
	cout<<"\nLa z es: "<<z<<endl;

	MiMemoria->poner_dato(z,"->javier",MiMemoria->obtenerDato(z,"->javier")+2);
//	MiMemoria->mostrar();

	L->inserta_primero(100);


	L->inserta_ultimo(200);


	L->inserta(L->fin(),150);
	MiMemoria->mostrar();

	system("pause");
	return 0;
}