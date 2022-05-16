/*1. Implemente un programa con clases que calcule el área de un 
rectángulo y perímetro.*/

#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>

class Rectangulo{

private:
    int largo, ancho;

public:
    Rectangulo(int ,int);
    ~Rectangulo();
    int area();
    int perimetro();


};

#endif