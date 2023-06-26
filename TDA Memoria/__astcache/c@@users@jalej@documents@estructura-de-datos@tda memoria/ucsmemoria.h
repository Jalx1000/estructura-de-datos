﻿//---------------------------------------------------------------------------

#ifndef UCSMemoriaH
#define UCSMemoriaH
#include <string>
#include <iostream>
using namespace std;
//---------------------------------------------------------------------------
typedef int direccion_memoria;
const int MAX = 11;
const int NULO = -1;

struct Nodo
{
    int dato;
    string id;
    direccion_memoria link;
};

class CSMemoria
{
  private:
    Nodo* mem;
    direccion_memoria libre;
  public:
    CSMemoria();
    direccion_memoria new_spacio(string cadena);
	void Delete_espacio(direccion_memoria dir);
	void poner_dato(direccion_memoria dir, string id, int valor);
	int obtenerDato(direccion_memoria dir, string id);
	int Espacio_Disponible();
	int Espacio_ocupado();
	bool dir_libre(direccion_memoria dir);
    void mostrar_memoria();
};
#endif
