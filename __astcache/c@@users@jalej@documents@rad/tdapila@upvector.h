//---------------------------------------------------------------------------

#ifndef UPVectorH
#define UPVectorH
//---------------------------------------------------------------------------

typedef int elemento;
int max=7;

class PVector{
	private:
	int v[max];
	int Tope;
	public:
	PVector();
	bool Vacia();
	void Meter(elemento e);
	void Sacar(elemento &e);
    elemento cima();
};
#endif
