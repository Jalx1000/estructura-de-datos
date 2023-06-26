//---------------------------------------------------------------------------

#pragma hdrstop

#include "UCSMemoria.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#include <iomanip>
#include <string>
using namespace std;

//funciones que no estan en la leccion

int Numero_lds(string cadena)
{
    int cont = 0;
    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] == ',') {
            cont++;
        }
    }

    cont += (cadena.empty() ? 0 : 1);
    return cont;
}
string Obtener_id(string cadena, int n)
{
    string palabra = "";
    int contador = 0;
    int i = 0;
    while (contador < n - 1 && i < cadena.length() - 1) {
        if (cadena.at(i) == ',') {
            contador += 1;
            cadena = cadena.substr(
                i + 1, cadena.length() - (cadena.substr(0, i).length()));
            i = -1;
        }
        i += 1;
    }
    i = 0;
    while (cadena[i] != ',' && i < cadena.length()) {
        i += 1;
    }
    palabra = cadena.substr(0, i);

    return palabra;
}

void eliminarFlecha(string &cadena)
{
    int index = 0;
    if (cadena != "") {
        while (cadena[index] != '-' && cadena[index + 1] != '>') {
            index += 1;
        }
        cadena = cadena.substr(index + 2,
            cadena.length() - (cadena.substr(0, index + 1).length()));
    }
}

//CLASE CSMEMORIA
CSMemoria::CSMemoria()
{
    mem = new Nodo[MAX];
    for (int i = 0; i < MAX; i++) {
        mem[i].dato = 0;
        mem[i].link = i + 1;
    };
    mem[MAX - 1].link = -1;
    libre = 0;
}

void CSMemoria::mostrar_memoria()
{
    cout << "+";
    for (int i = 2; i <= 3 + 4 + 8 + 3 + 5; i = i + 1) {
        cout << "-";
    };
    cout << "+"
         << "\n";
    cout << "|DIR|"
         << "DATO|"
         << "---ID---|"
         << "LINK|\n";
    for (int i = 0; i < MAX; i = i + 1) {
        cout << "|" << setw(3) << i << "|" << setw(4) << mem[i].dato << "|"
             << setw(8) << mem[i].id << "|" << setw(4) << mem[i].link << "|\n";
    };
    cout << "+";
    for (int i = 2; i <= 2 + 4 + 8 + 4 + 5; i = i + 1) {
        cout << "-";
    };
    cout << "+\n";
    //	cout<<"LIBRE:"<<libre<<"\n";
    //cout<<"ESPACIO DISPONIBLE:"<<Espacio_disponible()<<"\n";
    //	cout<<"ESPACIO OCUPADO:"<<Espacio_ocupado()<<"\n";
}

direccion_memoria CSMemoria::new_spacio(string cadena)
{
    int cant = Numero_lds(cadena); //2
    int dir = libre; //0
    int d = libre; //0
    for (int i = 1; i <= cant - 1; i++) {
        mem[d].id = Obtener_id(cadena, i);
        /*cout<<"|"<<setw(3)<<d<<"|"<<setw(4)<<
			mem[d].dato<<"|"<<setw(8)<<mem[d].id<<
			"|"<<setw(4)<<mem[d].link<<"|\n";  */
        d = mem[d].link; //1;
    }
    libre = mem[d].link;
    mem[d].link = -1;
    mem[d].id = Obtener_id(cadena, cant); //Perez
    /*  cout<<"|"<<setw(3)<<d<<"|"<<setw(4)<<
			mem[d].dato<<"|"<<setw(8)<<mem[d].id<<
			"|"<<setw(4)<<mem[d].link<<"|\n";     */
    return dir;
}

void CSMemoria::Delete_espacio(direccion_memoria dir)
{
    int x = dir;
    while (mem[x].link != -1) {
        x = mem[x].link;
    }
    mem[x].link = libre;
    libre = dir;
}

void CSMemoria::poner_dato(direccion_memoria dir, string id, int valor)
{
    direccion_memoria z = dir;
    eliminarFlecha(id);
    while (z != NULO) {
        if (mem[z].id == id) {
            mem[z].dato = valor;
        }
        z = mem[z].link;
    }
}

int CSMemoria::obtenerDato(direccion_memoria dir, string id)
{
    int z = dir;
    bool ex = false;
    eliminarFlecha(id);
    while (z != NULO) {
        if (mem[z].id == id)
			return mem[z].dato;
        z = mem[z].link;
    }
}

int CSMemoria::Espacio_Disponible() {
	int x = libre;
	short c = 0;
	while(x!=NULO){
		c++;
		x = mem[x].link;
	}
	return c;
}

int CSMemoria::Espacio_ocupado() {
	short c = (MAX)-Espacio_Disponible();
	return c;
}

bool CSMemoria::dir_libre(direccion_memoria dir) {
	int x = libre;
	int c =  false;
	while(x!=NULO && c == false){
		if(x == dir ){
			c = true;
		}
		x = mem[x].link;
	}
	return c;
}

