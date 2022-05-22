#ifndef ClaseCuenta_H
#define ClaseCuenta_H
#include "ClaseBanco.h"
#include <iostream>
using namespace std;

class ClaseCuenta:public ClaseBanco{
    public:
        ClaseCuenta();
        ~ClaseCuenta();
        void imprimir();

};

#endif