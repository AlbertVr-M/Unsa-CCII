#include "ClaseCirculo.h"
#include <math.h>
#include <iostream>
using namespace std;

ClaseCirculo ::ClaseCirculo(string _color, string _nombreForma, float _radio) : ClaseForma(_color,_nombreForma){

    radio=_radio;
}
ClaseCirculo::~ClaseCirculo(){

}
void ClaseCirculo::imprimir(){

    cout<<"El radio del circulo es: "<<2*pi*radio<<endl;

}
