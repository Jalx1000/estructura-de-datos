﻿#include <iostream>
#include <CSMemoria.h>
#include <ULists_Sim.h>
int main(){
	CSMemoria* MiMemoria;
	ListaS* L;
	//constructores
	cout<< "\nLa memoria ---------------------"<<endl;
	MiMemoria = new CSMemoria();
	cout<< "\nFin memoria ---------------------"<<endl;
	L = new ListaS(MiMemoria);
//	cout<< "\n Lista"<<L->to_str()<<endl;
	system("pause");
	return 0;

}
