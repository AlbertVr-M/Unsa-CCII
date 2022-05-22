#include "ClaseForma.h"
#include <iostream>
using namespace std;

ClaseForma::ClaseForma(string _color, string _nombreForma){
    color=_color;
    nombreForma=_nombreForma;

}
ClaseForma:: ~ClaseForma(){

}
void ClaseForma :: imprimir(){
    cout<<"Tiene la forma de un "<<nombreForma<<" y es de color "<<color<<endl;
}
