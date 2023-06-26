#include <iostream>
#include <tchar.h>
#include "UCSMemoria.h"

int _tmain(int argc, _TCHAR* argv[])
{
    CSMemoria* MiMemoria = new CSMemoria();
    MiMemoria->mostrar_memoria();
    int x = MiMemoria->new_spacio("juan,Carlos");
    cout << "\nLa x es: " << x << endl;
    MiMemoria->mostrar_memoria();
    system("pause");
    return 0;
}

