#include <iostream>
#include <tchar.h>
#include "PilaPP.h"

int _tmain(int argc, _TCHAR* argv[])
{
    PilaP pilap;

    pilap.meterPP(10);
    pilap.meterPP(20);
    pilap.meterPP(30);
    pilap.meterPP(40);
    pilap.mostrarPP();

    cout << "\n";

    int elementoSacar;
    pilap.sacarPP(elementoSacar);
    cout << "\n";
    pilap.mostrarPP();

    system("PAUSE");
    return 0;
}

