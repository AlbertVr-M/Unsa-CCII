#ifndef ClasePato_H
#define ClasePato_H
#include "ClaseAve.h"
#include <iostream>
using namespace std;

class ClasePato:public ClaseAve{

    private:
        string status, tamanio;
        
    public:
        ClasePato(string,string);
        ~ClasePato();
        void mostrarPato();

};

#endif