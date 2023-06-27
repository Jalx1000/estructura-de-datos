//---------------------------------------------------------------------------

#ifndef UVPilaH
#define UVPilaH
//---------------------------------------------------------------------------
const int MAX = 100;
typedef int direccion;
typedef int tipo_elemento;
class UVPila
{
  private:
    tipo_elemento elementos[MAX];
    direccion Tope;
  public:
    UVPila();
    bool Vacia();
    void Meter(tipo_elemento E);
    void Sacar(tipo_elemento &E);
	tipo_elemento cima();

    void MostrarPila(const UVPila& pila);
};

#endif

