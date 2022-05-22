#ifndef ClaseGanso_H
#define ClaseGanso_H
#include "ClaseAve.h"
#include <iostream>
using namespace std;

class ClaseGanso:public ClaseAve{

    public:
        ClaseGanso(string,string);
        ~ClaseGanso();
        void mostrarGanso();


    private:
        string color{},huevos{};


};

#endif