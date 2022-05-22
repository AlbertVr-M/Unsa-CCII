#include "ClaseElipse.h"
#include <iostream>
using namespace std;

ClaseElipse :: ClaseElipse(string _color, string _nombreForma, float _radioMayor, float _radioMenor) : ClaseForma(_color,_nombreForma){

    radioMayor=_radioMayor;
    radioMenor=_radioMenor;

}

ClaseElipse :: ~ClaseElipse(){


}

void ClaseElipse :: imprimir(){
    ClaseForma::imprimir();
    cout<<"El area de la Elipse es "<<pi*(radioMayor*radioMenor)<<endl;

}