#include "ClasePato.h"
#include <iostream>
using namespace std;

ClasePato::ClasePato(string _status, string _tamanio){
    status=_status;
    tamanio=_tamanio;

}
ClasePato::~ClasePato(){

}
void ClasePato::mostrarPato(){
    MostrarAve();
    cout<<"Vuela o no Vuela "<<status<<endl;
    cout<<"Es de tamaño: "<<tamanio<<endl;
}
