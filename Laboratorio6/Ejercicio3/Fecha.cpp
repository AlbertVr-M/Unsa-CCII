/*3. Implemente un programa con clases que lea la fecha de nacimiento y la fecha de hoy
y muestre por pantalla el nombre y la edad de la persona.*/

#include "Fecha.h"
#include <iostream>
using namespace std;

Fecha :: Fecha(string nombre, int anio, int mes){

    this -> nombre = nombre;
    this -> anio = anio;
    this-> mes = mes;

}
Fecha :: ~Fecha(){

}

void Fecha :: edad_actual(){

    cout<<" Su nombre es " <<nombre<<" y su edad actual es:  "<<anio<<" años "<<" con "<<mes<<" meses."<<endl;
}