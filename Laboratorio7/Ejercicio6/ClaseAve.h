/*
Escribe un programa que implemente la siguiente jerarquía de clases, Debe
implementar aquellos atributos y métodos necesarios para que se pueda ejecutar el
siguiente programa:
*/
#ifndef ClaseAve_H
#define ClaseAve_H
#include <iostream>
using namespace std;
class ClaseAve{

    protected:
        string animal="Aves";
        int patas=2;
    public:
        ClaseAve();
        ~ClaseAve();
        void MostrarAve();

};

#endif
//Albert Vargas Mamani