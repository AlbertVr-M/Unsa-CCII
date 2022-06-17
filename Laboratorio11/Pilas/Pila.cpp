#include "Pila.h"
#include <iostream>
using namespace std;

Pila ::Pila (){
    this->Cabeza =NULL;
    this->tamanio =0;

}
//1. Defina una Pila que permita insertar elementos utilizando clases.
void Pila :: insertar(int n){
    Nodo *nuevo = new Nodo();
    nuevo ->dato = n;
    nuevo->siguiente = this->Cabeza;
    this-> Cabeza = nuevo;
    cout<<"El numero "<<n<<" fue ingresado correctamente "<<endl;
    this->tamanio++;
}
//2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una Pila.
void Pila :: eliminar(){
    Nodo *aux2= this->Cabeza;
    Cabeza=Cabeza->siguiente;
    delete aux2;
    
}
void Pila :: mostrar(){
    Nodo *aux = this->Cabeza;
    while(aux !=NULL){
        cout<<"-"<<aux->dato<<endl;
        aux=aux->siguiente;
    }
}
//3. Implemente un algoritmo para buscar elementos de la Pila.
int Pila :: buscar(int numero){
    Nodo *aux1= this->Cabeza;
    while(aux1!=NULL){
        if(aux1->dato==numero){
            return aux1->dato;
            break;
        }
        else{
            aux1=aux1->siguiente;
        }
            
    }
}

Pila ::~Pila(){

}
//ALBERT VARGAS MAMANI