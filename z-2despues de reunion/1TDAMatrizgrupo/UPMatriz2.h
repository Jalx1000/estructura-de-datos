//---------------------------------------------------------------------------

#ifndef UPMatriz2H
#define UPMatriz2H
//---------------------------------------------------------------------------

struct NodoC
{
    int Col;
    int Dato;
    NodoC* SigCol;
};

struct NodoF
{
    int Fila;
    NodoF* SigF;
    NodoF* AntF;
    NodoC* PtrCol;
};

//class PMatriz2
//{
//  private:
//  public:
//    PMatriz2();
//    void dimensionar(int df, int dc);
//    int dimension_Fila();
//    int dimension_columna();
//    void poner(f, c
//               : indice;
//               valor
//               : elemento) l
//
//        int Elemento(f, c
//                     : indice);
//
//    void definir_valor_repetido(valor : elemento);
//};
#endif

