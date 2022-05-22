#ifndef ClaseForma_H
#define ClaseForma_H
#include <iostream>
using namespace std;

class ClaseForma{

    protected:
        string color;
        int x,y;
        string nombreForma;

    public:
        ClaseForma(string,string);
        ~ClaseForma();
        virtual void imprimir();
        
        
};
#endif