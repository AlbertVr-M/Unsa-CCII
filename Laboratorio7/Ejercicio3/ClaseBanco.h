/*
Dada la siguiente jerarquía de herencia, indica la visibilidad de los atributos de la
clase ProductoBancario en las clases CuentaJoven e Hipoteca.
*/
#ifndef ClaseBanco_H
#define ClaseBanco_
#include <iostream>
using namespace std;


class ClaseBanco{

    protected:
        string cliente{};
        double saldo{};
        int numProducto{};
    public:
        ClaseBanco();
        ~ClaseBanco();
        void imprimir();



};

#endif

//Albert Vargas Mamani