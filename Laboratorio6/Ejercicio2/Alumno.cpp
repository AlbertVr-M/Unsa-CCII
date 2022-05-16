/*2. Se conoce de un alumno de la Universidad Nacional de San Agustín: CUI, nombre
completo y tres notas parciales (nota1, nota2, nota3). El programa con clases debe
imprimir: CUI, el primer nombre, el promedio de las tres notas e indique con un
mensaje si el alumno aprobó (nota final >= 10.5) o no aprobó (nota final < 10.5) la
asignatura de Ciencias de la Computación II.*/

#include "Alumno.h"
#include <iostream>
using namespace std;
#include <string>

Alumno ::Alumno(int _codigo, string _nombre, string _apellidos, int _nota1, int _nota2, int _nota3, string _aprobo ){

    codigo=_codigo;
    nombre = _nombre;
    apellidos = _apellidos;
    nota1 = _nota1;
    nota2 = _nota2;
    nota3= _nota3;
    aprobo = _aprobo;


}
Alumno::~Alumno(){

}
void Alumno::datosAlumnos(){

    cout<<"El CUI, el nombre, apellidos, el promedio y la situacion es: "<<codigo<<nombre<<apellidos<<(nota1+nota2+nota3)/3<<aprobo<<endl;
}

