//---------------------------------------------------------------------------
/// Aqui Van la Lista de Metodos
// y la clase
#ifndef CSMemoriaH
#define CSMemoriaH
//---------------------------------------------------------------------------
#include <string>
#include <iostream>
using namespace std;


 typedef int direccion_mem;
 const int MAX_MEMORIA= 11;
 const int NULO = -1;

 struct NodoM
 {
	 int dato;
	 string id;
	 direccion_mem link;
 };

 class CSMemoria
 {
	 private:
	 NodoM* mem;
	 direccion_mem libre;
	 public:
	 CSMemoria();
	 direccion_mem new_spacio(string cadena);
	 void mostrar_memoria();
 };


#endif
