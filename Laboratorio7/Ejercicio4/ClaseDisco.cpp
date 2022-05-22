#include "ClaseDisco.h"
#include <iostream>
using namespace std;

ClaseDisco::ClaseDisco(string _nombre, int _tamanio, float _velocidad):ClaseMultimedia(_nombre,_tamanio){
    
    velocidad=_velocidad;
}
ClaseDisco::~ClaseDisco(){

}

void ClaseDisco::mostrarDatosDisco(){
    mostrarMultimedia();
    cout<<" La velocidad del disco es: "<<velocidad<<endl;

}