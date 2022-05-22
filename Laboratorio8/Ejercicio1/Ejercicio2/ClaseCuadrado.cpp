#include "ClaseCuadrado.h"
#include <iostream>
using namespace std;

ClaseCuadrado :: ClaseCuadrado(string _color ,string _nombreForma,float _lado):ClaseForma(_color,_nombreForma){

    lado=_lado;
}
ClaseCuadrado ::~ClaseCuadrado(){

}

void ClaseCuadrado:: imprimir(){
    
    cout<<"\nEl lado del cuadrado es "<<lado<<endl;
    cout<<"\nEl area del Cuadrado es "<<lado*lado<<endl;
    cout<<"\nEl perimetro es "<<lado*4<<endl;
}