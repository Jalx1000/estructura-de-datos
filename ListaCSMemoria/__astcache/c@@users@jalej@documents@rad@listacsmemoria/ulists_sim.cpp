//---------------------------------------------------------------------------

#pragma hdrstop

#include "ULists_Sim.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
ListaS::ListaS(){
  ptr_elementos=NULO;
  longit=0;
  mem=new  CSMemoria();
}
/*L->[]
   ptr_elementos=-1
   longit=0;
   Memoria
   [----]

*/

ListaS::ListaS(CSMemoria* m){
  ptr_elementos=NULO;
  longit=0;
  mem=m;

}

/*

lista.inserta_primero( E TipoElemento)
Inicio // x tendria direcion de memoria si existe espacio
x=M.New_espacio(�elemento,sig�)
si x <> nulo entonces
 inicio
 m.poner_dato(x,�->elemento�,E)
 m.poner_dato(x,�->sig�,PtrElementos)
 longitud=longitud + 1
 PtrElementos = x
 fin
 caso contrario // llamar a exception existeespaciomemoria
Fin
*/                          //100
void ListaS::inserta_primero(int e){
  //mem->mostrar();       //sigNL = "->sig"
			//   datosNL="elemento.sig";     //elemNL=->elemento
 int x=mem->new_espacio(datosNL); //0    //Nulo=-1 ,ptr_elementos=-1
 if(x!=NULO){
   //poner_dato(dir,id,valor)
   mem->poner_dato(x,elemNL,e);
   //mem->mostrar();
   mem->poner_dato(x,sigNL,ptr_elementos);
   //mem->mostrar();
   ptr_elementos=x;
   longit++;

 }
 cout<< "ERROR:NO EXISTE ESPACIO EN LA MEMORIA\n";
}

bool ListaS::vacia(){
	return longit == 0;
}

int ListaS::fin(){
	if(vacia()){
		cout << "ERROR: LISTA VACIA\n";
	}else{
		int x = ptr_elementos;
		int ptr_fin;
		while ( x != NULO ){
			ptr_fin = x;		
			x = mem->obtenerDato(x,sigNL);	
		}
		return ptr_fin;
    }
};

int ListaS::primero(){
	if(vacia()){
		return ptr_elementos;
	}else{
		cout<<"\nLa lista no esta vacia"<<endl;
	}
};

int ListaS::anterior(int d){
	if(vacia()){
		cout<<"\nLa lista esta vacia"<<endl;
	}else{
		if(d == primero()){
			cout<<"\nYa esta ocupado el primero"<<endl;
		}else{
			int x = ptr_elementos;
			int ant = NULO;
			while ( x!=NULO ){
				if( x=d ){
					return ant;
					ant=x;
					x=mem->obtenerDato(x,sigNL);
				}
			}

        }
    }
}

void ListaS::inserta_ultimo(int e){
	int x = mem->new_espacio(datosNL);
	if( x != NULO){
		mem->poner_dato(x,elemNL,e);
		mem->poner_dato(x,sigNL,NULO);
			if(vacia()){
			   mem->poner_dato(fin(),sigNL,x);
			}else{
				ptr_elementos=x;
				longit++;
			}
	}else{

    }
}

void ListaS::inserta(int d, int e){
	int x = mem->new_espacio(datosNL);
	if(x != NULO ){
		mem->poner_dato(x,elemNL,e),mem->poner_dato(x,sigNL,NULO);
		int longitude;
		if( vacia() ){
			ptr_elementos = x;
			longit = 1;
		}else{
			longitude = longitude + 1;
			int ant;
			if( d == primero() ){			
				mem->poner_dato(x,sigNL,d);
				ptr_elementos=x;
			}else{
				ant = anterior(d);
				mem->poner_dato(ant,sigNL,x);
				mem->poner_dato(x,sigNL,d);
			}
		}
	}else{
		cout << "\nNo se puede insertar" <<endl;
	}
}





