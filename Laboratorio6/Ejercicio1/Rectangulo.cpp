/*1. Implemente un programa con clases que calcule el área de un 
rectángulo y perímetro.*/

#include <stdlib.h>
#include "Rectangulo.h"
#include <iostream>
using namespace std;

    



Rectangulo :: Rectangulo(int _largo, int _ancho){

    largo= _largo;
    ancho = _ancho;

}
Rectangulo:: ~Rectangulo()
{
}

int Rectangulo::area(){
    
    cout<<"El area del Recetangulo es: "<<ancho*largo<<endl;

}
int Rectangulo :: perimetro(){
    cout<<"El perimetrodel Recetangulo es: "<< (ancho*2)+(largo*2)<<endl;
}

