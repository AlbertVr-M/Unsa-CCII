/*5.Implementar un programa con clases que haga la búsqueda de un dato almacenado en
una matriz de 3x3 que tiene los números de 1 al 9 ingresados aleatoriamente y debe
indicar la posición donde se encuentra el dato.*/

#include "Matriz.h"
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

Matriz :: Matriz(int num){

    this ->num = num;
    for(int i=0; i<fil;i++){
        for(int j=0; j<colum;j++){
            _Matriz[i][j] = 0;
        }


    }
}
Matriz :: ~Matriz(){

}

void Matriz :: llenar(){

    for(int i=0; i<fil;i++){
        for(int j=0; j<colum;j++){
            _Matriz[i][j] = 0 + rand() % 9;
        }


    }
}

void Matriz :: mostrar(){

    for(int i=0; i<fil;i++){
        for(int j=0; j<colum;j++){
           cout<<setw(3)<<_Matriz[i][j]<<" ";

        }cout<<endl;


    }   


}
void Matriz :: buscar_numero(){
    int co, fi;
    bool verifica;
    for(int i=0; i<fil;i++){
        for(int j=0; j<colum;j++){
           if(num== _Matriz[i][j]){
               co = i;
               fi = j;
                verifica = true;

            }
        }   
    }
    if(verifica==true){
        cout<<"El valor "<<num << " esta en la columna "<<co<< " y en la fila "<<fi; 
    }
    else{
        cout<<"Valor no encontrado";
    }
}