/*1. Implemente un programa con clases que calcule el área de un 
rectángulo y perímetro.*/

#include <iostream>
#include "Rectangulo.h"
using namespace std;

int main(){
    Rectangulo r1= Rectangulo(2,5);
    r1.area();
    system("pause");


    return 0;
}