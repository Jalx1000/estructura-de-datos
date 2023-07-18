#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  string pregunta;
  do
  {
    string archivoTXT;
    cout << "Nombre del archivoTXT: \n";
    cin >> archivoTXT;
    archivoTXT = archivoTXT + ".txt";

    string nombreArchivo = archivoTXT;
    ifstream archivo(nombreArchivo.c_str());
    string linea;
    // Obtener línea de archivo, y almacenar contenido en "linea"
    while (getline(archivo, linea))
    {
      // Lo vamos imprimiendo
      cout << "línea : ";
      cout << linea << endl;
    }

    cout << "Quieres leer otro archivo? [s/n] \n";
    cin >> pregunta;

  } while (pregunta == "s");
}
