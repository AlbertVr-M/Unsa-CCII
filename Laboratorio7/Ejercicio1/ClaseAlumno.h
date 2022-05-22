

#ifndef ClaseAlumno_H
#define ClaseAlumno_H
#include "ClasePersona.h"
using namespace std;

class ClaseAlumno : public ClasePersona{
   

    public:
        ClaseAlumno(string,int);
        ~ClaseAlumno();
        void mostrarDatosAlumno();
        
        
};

#endif
