//---------------------------------------------------------------------------

#ifndef UListaH
#define UListaH
//---------------------------------------------------------------------------
struct Nodo{
	int elemento;
	Nodo *sig;
};

Nodo *Direccion;

class LLista{
	private:
	  Direccion Ptr_Elementos;
	  int longitud;
	public:
	  Lista();
      Dirección fin()
	  Dirección primero()
	  Dirección siguiente(int dirección)
	  Dirección anterior(int dirección)
	  bool vacia()
	  int recupera(int dirección)
	  int longitud ();
	  void inserta(int dirección,int elemento)
	  void inserta_primero(int elemento)
	  void inserta_ultimo(int elemento)
	  void suprime(int dirección)
	  void modifica(int dirección,int elemento)
};
#endif
