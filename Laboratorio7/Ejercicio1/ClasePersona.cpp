#include "ClasePersona.h"
#include <iostream>
using namespace std;

ClasePersona :: ClasePersona(string _nombre, int _edad){
        nombre=_nombre;
        edad=_edad;

      
}
ClasePersona :: ~ClasePersona(){

}
void ClasePersona :: mostrarDatos(){
    cout<<"Nombre "<<nombre<<endl;
    cout<<"Edad "<<edad<<endl;
}