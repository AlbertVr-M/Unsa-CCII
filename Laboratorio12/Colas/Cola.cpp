#include "Cola.h"
#include <iostream>

Cola ::Cola() {

    this->Cabeza=NULL;
    this->tamanio=0;
}

void Cola ::ingresar(int n){
    Nodo *nuevo= new Nodo();
    nuevo->dato=n;
    nuevo->siguiente=this->Cabeza;
    this->Cabeza=nuevo;
    std::cout<<"El dato fue ingresado correctamente "<<std::endl;
    this->tamanio++;
    j++;
}
void Cola::eliminar(){
    int ax=0;
    Nodo *aux_1=this->Cabeza;
    while (ax<tamanio-2){
        aux_1=aux_1->siguiente;
        ax++;
    }
    aux_1->siguiente=NULL;
    tamanio=tamanio-1;
}
void Cola::mostrar(){
    Nodo *aux=this->Cabeza;
    while(aux!=NULL){
        std::cout<<"-"<<aux->dato<<std::endl;
        aux=aux->siguiente;
    }

}

int Cola::buscar(int numero){
    Nodo *aux1=this->Cabeza;
    while (aux1!=NULL)
    {
        if (aux1->dato==numero){
            return numero;
            break;
        }
        else
            aux1=aux1->siguiente;
    }
    

}

Cola::~Cola(){

}
//ALBERT VARGAS MAMANI