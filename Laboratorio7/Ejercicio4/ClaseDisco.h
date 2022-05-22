/*4. Escribe una clase de nombre ClaseDisco, que herede de la clase ClaseMultimedia los
atributos y métodos definidos por usted. La clase ClaseDisco tiene, aparte de los
elementos heredados, un atributo más también definido por usted. Al momento de
imprimir la información debe mostrase por pantalla toda la información.
*/
#ifndef ClaseDisco_H
#define ClaseDisco_H
#include "ClaseMultimedia.h"
#include <iostream>
using namespace std;

class ClaseDisco:public ClaseMultimedia{

    private:
        float velocidad{};
    public:
        ClaseDisco(string,int,float);
        ~ClaseDisco();
        void mostrarDatosDisco();

};

#endif

//Albert Vargas Mamani