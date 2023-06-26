//---------------------------------------------------------------------------

#ifndef UPMatrizH
#define UPMatrizH
//---------------------------------------------------------------------------
struct Nodo
{
    int fila;
    int col;
    int dato;
    Nodo* sig;
}

Nodo* Direccion;

class MatrizDispersa
{
  private:
    Direccion PtrMatD;
    int rep, dimf, dimc;
  public:
	MatrizDisperza();
	void dimensionar(int df,int dc);
	int dimension_Fila();
	int dimension_columna();
	void poner(int f,int  c : indice; valor : elemento);
	int Elemento(f, c : indice);
	void definir_valor_repetido(valor : elemento);
};
#endif

