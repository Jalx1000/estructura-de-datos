//---------------------------------------------------------------------------

#ifndef CSRMatrizH
#define CSRMatrizH
//---------------------------------------------------------------------------
const int MAX = 100;

class CRSMatriz{
	typedef int elementos;
	typedef int elemento;
	typedef int indice;

  private:

	int vf;
	int vc;
	elementos vd[MAX];
	int df, dc;
	elemento repe;
	int nt;

	int existe_elemento(indice f, indice c);
	int donde_insertar(indice f, indice c);

//    bool verificarRango(indicef, indice c);
//    void eliminar(indice f, indice c);
  public:

	CRSMatriz();
	void dimensionar(int df, int dc);
	int dimension_fila();
	int dimension_columna();
	void poner(indice f, indice c, elemento valor);
	elemento Elemento(indice f, indice c);
	void definir_valor_repetido(elemento valor);
};
#endif

