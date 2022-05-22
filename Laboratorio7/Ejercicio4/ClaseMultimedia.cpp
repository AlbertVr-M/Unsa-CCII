#include "ClaseMultimedia.h"
#include <iostream>
using namespace std;

ClaseMultimedia::ClaseMultimedia(string _nombre,int _tamanio){
    nombre=_nombre;
    tamanio=_tamanio;

}
ClaseMultimedia::~ClaseMultimedia(){

}

void ClaseMultimedia::mostrarMultimedia(){
    cout<<"\nEl nombre es Carpeta "<<nombre<<endl;
    cout<<"El tamaño en bytes es: "<<tamanio<<" bytes"<<endl;

}