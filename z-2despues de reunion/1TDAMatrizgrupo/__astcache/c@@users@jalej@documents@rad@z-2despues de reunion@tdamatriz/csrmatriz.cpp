//---------------------------------------------------------------------------

#pragma hdrstop

#include "CSRMatriz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)


CRSMatriz::CRSMatriz{
    df = 0;
    dc = 0;
    repe = 0;
	nt = 0;

	for (int k=1; i < df+1; i++) {
		vf[k]=1;
	}
}

CRSMatriz::dimensionar(int nf,int nc){
	df=nf;
	dc=nc;
}

int CRSMatriz::dimension_fila(){

}

