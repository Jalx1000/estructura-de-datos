\ R E G I S T R Y \ U S E R \ S - 1 - 5 - 2 1 - 8 0 2 7 9 9 6 3 2 - 3 8 0 8 0 4 7 5 7 6 - 2 4 3 9 6 1 5 9 3 1 - 1 0 0 1 _ C l a s s e s \ C L S I D \ { 1 7 7 F 0 C 4 A - 1 C D 3 - 4 D E 7 - A 3 2 C - 7 1 D B B B 9 F A 3 6 D } \ L o c a l S e r v e r 3 2   2   --
typedef int direccion_memoria;
const int MAX=11;
const int NULO=-1;

struct Nodo{
	int dato;
	string id;
	direccion_memoria link;
};

class CSMemoria{
	private:
	Nodo* mem;
	direccion_memoria libre;
	public:
	CSMemoria();
    void mostrar_memoria();
};
#endif
