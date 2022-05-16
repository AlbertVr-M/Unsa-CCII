/*5.Implementar un programa con clases que haga la búsqueda de un dato almacenado en
una matriz de 3x3 que tiene los números de 1 al 9 ingresados aleatoriamente y debe
indicar la posición donde se encuentra el dato.*/

#include "Matriz.h"
#include <iostream>
using namespace std;

int main(){
    int numero;
    cout<<"Ingrese el numero que quiere buscar: ";
    cin>>numero;
    Matriz m1 = (numero);
    m1.llenar();
    m1.mostrar();
    m1.buscar_numero();

    return 0;
}