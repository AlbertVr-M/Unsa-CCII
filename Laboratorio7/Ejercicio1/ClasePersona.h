/*1. Crear una clase Persona del cual tendrá métodos asignar una edad y nombre. Una
segunda clase, alumno, tendrá que heredar este contenido y a través de esta clase
poder asignar los datos de edad y nombre de los estudiantes.
*/

#ifndef ClasePersona_H
#define ClasePersona_H
#include <iostream>
using namespace std;

class ClasePersona{

    public:
        string nombre{};  
        int edad{};
    public:
        
        ClasePersona(string,int);
        ~ClasePersona();
        void mostrarDatos();


};



#endif

//AlbertVargasMamani