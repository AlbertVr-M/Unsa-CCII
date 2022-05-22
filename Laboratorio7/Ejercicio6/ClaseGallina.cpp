#include "ClaseGallina.h"
#include <iostream>
using namespace std;

ClaseGallina :: ClaseGallina(string _raza, float _peso){
    raza=_raza;
    peso=_peso;
}
ClaseGallina::~ClaseGallina(){

}
void ClaseGallina::mostrarGallina(){
    MostrarAve();
    cout<<"Es de raza: "<<raza<<endl;
    cout<<"Pesa: "<<peso<<endl;
}