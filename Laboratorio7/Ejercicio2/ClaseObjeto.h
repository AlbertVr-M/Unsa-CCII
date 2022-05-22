#ifndef ClaseObjeto_H
#define ClaseObjeto_H
#include "ClaseMaterial.h"
#include <iostream>
using namespace std;
class ClaseObjeto : public ClaseMaterial{
    public:
        string objeto;
    public:
        ClaseObjeto(string,string);
        ~ClaseObjeto();
        void mostrarObjetoVerde();
        void mostrarObjetoAzul();
        void mostrarObjetoRojo();
};

#endif