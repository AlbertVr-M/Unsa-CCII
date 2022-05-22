#ifndef ClaseCirculo_H
#define ClaseCirculo_H
#include "ClaseForma.h"
using namespace std;
class ClaseCirculo:public ClaseForma{

    private:
        float const pi=3.1416;
        float radio{};

    public:
        ClaseCirculo(string,string,float);
        ~ClaseCirculo();
        void imprimir();

};

#endif