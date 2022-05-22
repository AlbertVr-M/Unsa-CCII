#ifndef ClaseMaterial_H
#define ClaseMaterial_H
#include "ClaseColor.h"
using namespace std;
class ClaseMaterial:public ClaseColor{
    protected:
        string material;
    public:
        ClaseMaterial(string);
        ~ClaseMaterial();
};

#endif