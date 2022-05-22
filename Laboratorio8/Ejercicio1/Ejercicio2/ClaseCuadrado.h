#ifndef ClaseCuadrado_H
#define ClaseCuadrado_H
#include "ClaseForma.h"
#include <iostream>
using namespace std;

class ClaseCuadrado : public ClaseForma{
    
    private:
        float lado;


    public:
        ClaseCuadrado(string,string,float);
        ~ClaseCuadrado();
        void imprimir();

};

#endif