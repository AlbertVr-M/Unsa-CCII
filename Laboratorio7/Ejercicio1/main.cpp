#include "ClaseAlumno.h"
#include <iostream>
using namespace std;


int main (){

    string nombre{};
    int edad{};
    cout<<"\nIngrese su nombre: "<<endl;
    cin>>nombre;
    cout<<"\nIngrese su edad: "<<endl;
    cin>>edad;
    ClaseAlumno alumno1(nombre,edad);
    alumno1.mostrarDatosAlumno();
    system("pause");
    
}
