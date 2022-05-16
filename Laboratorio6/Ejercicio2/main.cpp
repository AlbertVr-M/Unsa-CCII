/*2. Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.*/

#include "Alumno.h"
#include <iostream>
#include <iostream>
using namespace std;

int main(){
    
    Alumno a1= Alumno(15457874, "Albert", "Vargas Mamani",15,14,13,"Aprobo");
    a1.datosAlumnos();
    system("pause");

    return 0;
}