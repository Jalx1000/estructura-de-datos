#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string filename;
    cout << "Introduzca el nombre del archivo: ";
    cin >> filename;

    // Abrir el archivo en modo lectura
    ifstream archivo(filename.c_str());

    if (!archivo)
    {
        cerr << "No se pudo abrir el archivo " << filename << endl;
        return 1;
    }

    // Leer el contenido del archivo y mostrarlo en la pantalla
    string linea;
    while (getline(archivo, linea))
    {
        cout << linea << endl;
    }

    // Cerrar el archivo
    archivo.close();

    return 0;
}
