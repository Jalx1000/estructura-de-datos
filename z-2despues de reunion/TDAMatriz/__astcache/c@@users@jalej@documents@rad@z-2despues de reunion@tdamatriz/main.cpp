﻿#include <tchar.h>
#include <crsmatriz.h>
#include <iostream>
#include <iomanip>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	CSRMatriz matriz;
//	matriz.CSRMatriz();

	matriz.dimensionar(3, 3);
	matriz.mostrar();
	matriz.poner(1, 1, 4);
	matriz.mostrar();
	matriz.poner(2, 2, 7);
	matriz.mostrar();
	matriz.poner(3, 3, 2);
	matriz.mostrar();


    system("PAUSE");
    return 0;
}

