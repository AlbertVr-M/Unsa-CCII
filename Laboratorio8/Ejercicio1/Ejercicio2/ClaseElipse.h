#ifndef ClaseElipse_H
#define ClaseElipse_H
#include "ClaseForma.h"
#include <iostream>
using namespace std;

class ClaseElipse:public ClaseForma{

    private:
        float const pi=3.1416;
        float radioMenor{}, radioMayor{};

    public:
        ClaseElipse(string, string, float,float);
        ~ClaseElipse();
        void imprimir();


};
#endif