/*2. Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.*/

#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
using namespace std;
class Alumno{

    private:
        int codigo, nota1, nota2, nota3;
        string nombre, apellidos, aprobo;

    public:
        Alumno (int, string, string, int, int, int, string );
        ~Alumno();
        void datosAlumnos();


};


#endif