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
      Direcci�n fin()
	  Direcci�n primero()
	  Direcci�n siguiente(int direcci�n)
	  Direcci�n anterior(int direcci�n)
	  bool vacia()
	  int recupera(int direcci�n)
	  int longitud ();
	  void inserta(int direcci�n,int elemento)
	  void inserta_primero(int elemento)
	  void inserta_ultimo(int elemento)
	  void suprime(int direcci�n)
	  void modifica(int direcci�n,int elemento)
};
#endif
