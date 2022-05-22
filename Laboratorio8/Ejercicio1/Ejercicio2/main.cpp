#include "ClaseRectanglo.h"
#include "ClaseElipse.h"
#include "ClaseCuadrado.h"
#include "ClaseCirculo.h"
#include <iostream>
using namespace std;

int main(){
    int cantidad;
    cout<<"Ingrese el tamaño del vector "<<endl;
    cin>>cantidad;
    ClaseForma *vector[cantidad];
    vector[0]= new ClaseRectanglo("azul","Rectangulo",5,6,2);
    vector[0]->imprimir();
    vector[1]= new ClaseElipse("rojo", "Elipse", 3.65,1.22);
    vector[1]->imprimir();
    vector[2]= new ClaseCuadrado("verde","Cuadrado",4);
    vector[2]->imprimir();
    vector[3]= new ClaseCirculo("morado","Circulo",3.56);
    vector[3]->imprimir();
    
    system("pause");
}