#include "ClaseGanso.h"
#include <iostream>
using namespace std;

ClaseGanso::ClaseGanso(string _color, string _huevos){
    color=_color;
    huevos=_huevos;

}
ClaseGanso::~ClaseGanso(){

}
void ClaseGanso::mostrarGanso(){
    MostrarAve();
    cout<<"El ganso "<<endl;
    cout<<"Es de color: "<<color<<endl;
    cout<<"Sus huevos son de tamaño: "<<huevos<<endl;
}