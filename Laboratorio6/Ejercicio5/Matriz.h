/*5.Implementar un programa con clases que haga la búsqueda de un dato almacenado en
una matriz de 3x3 que tiene los números de 1 al 9 ingresados aleatoriamente y debe
indicar la posición donde se encuentra el dato.*/

#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
using namespace std;
int const fil=3;
int const colum=3;
class Matriz{

    private:
        int _Matriz[fil][colum];
        int num;


    public:
        Matriz(int);
        ~Matriz();
        void llenar();
        void mostrar();
        void buscar_numero();
        
    
   
};


#endif