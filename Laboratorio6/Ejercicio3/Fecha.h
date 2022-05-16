/*3. Implemente un programa con clases que lea la fecha de nacimiento y la fecha de hoy
y muestre por pantalla el nombre y la edad de la persona.*/

#ifndef FECHA_H
#define FECHA_H
#include <iostream>
using namespace std;

class Fecha{

    private:
        int  mes{}, anio{};
        string nombre;
    public:
        Fecha (string, int, int);
        ~Fecha();
        void edad_actual();

};

#endif 