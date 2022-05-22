#ifndef ClaseGallina_H
#define ClaseGallina_H
#include "ClaseAve.h"
#include <iostream>
using namespace std;
class ClaseGallina:public ClaseAve{

    private:
        string raza;
        float peso;
        
    public:
        ClaseGallina(string, float);
        ~ClaseGallina();
        void mostrarGallina();
        


};

#endif 