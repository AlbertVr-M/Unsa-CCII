#ifndef ClaseRectanglo_H
#define ClseRectanglo_H
#include "ClaseForma.h"
#include <iostream>
using namespace std;

class ClaseRectanglo : public ClaseForma{

    protected:
        float factorTamanio{};
        float ladoMenor{}, ladoMayor{};


    public:
        ClaseRectanglo(string,string, float ,float,float);
        ~ClaseRectanglo();
        void imprimir();

};

#endif