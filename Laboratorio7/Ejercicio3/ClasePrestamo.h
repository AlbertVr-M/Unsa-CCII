#ifndef ClasePrestamo_H
#define ClasePrestamo_H
#include "ClaseBanco.h"
#include <iostream>
using namespace std;

class ClasePrestamo:public ClaseBanco {

    protected:
        ClasePrestamo();
        ~ClasePrestamo();
        void imprimir();


};

#endif