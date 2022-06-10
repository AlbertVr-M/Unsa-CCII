#include "Lista.h"
#include <iostream>
using namespace std;
Lista::Lista() {
    Cabeza = NULL;
}
void Lista::Set_cabeza(Nodo* C) {
    Cabeza = C;
}
Nodo* Lista::Get_cabeza() {
    return Cabeza;
}
Nodo* Lista::Get_ultimo() {
    Nodo *Ultimo = Get_cabeza();
    while (Ultimo->Get_enlace() != NULL) {
        Ultimo = Ultimo->Get_enlace();
    }
    return Ultimo;
}  
void Lista::agregar(Nodo* Nuevo) {

    if (Get_cabeza() == NULL)
        Set_cabeza(Nuevo);
    else{
        Get_ultimo()->Set_enlace(Nuevo);
    }
    i++;
}
Nodo* Lista::Buscar(int Numero) {
    Nodo *Busqueda = Get_cabeza();
    while ((Busqueda != NULL) && (Busqueda->Get_numero() != Numero)) 
        Busqueda = Busqueda->Get_enlace();
    return Busqueda;   
}
void Lista::Eliminar(int Numero) {
    Nodo *Busqueda = Get_cabeza();
    Nodo *Anterior = NULL;
    if (Busqueda->Get_numero() == Numero)
        Set_cabeza(Get_cabeza()->Get_enlace());
    else {
        while ((Busqueda != NULL) && (Busqueda->Get_numero() != Numero)) {
            Anterior = Busqueda;
            Busqueda = Busqueda->Get_enlace();
        }
        if (Busqueda != NULL) {
            Anterior->Set_enlace(Busqueda->Get_enlace());
        }
    }
    delete Busqueda;


}



void Lista:: Ordenar_Descendente(){
    Nodo* aux=Get_cabeza();
    Nodo* aux1;
    while(aux!=NULL){
        int num;
        aux1=aux;
        while(aux1!=NULL)
        {
            if(aux->Get_numero() <= aux1->Get_numero()){
                num=aux->Get_numero();
                aux->Set_numero(aux1->Get_numero());
                aux1->Set_numero(num);

            }
            aux1=aux1->Get_enlace();

        }
        aux1=aux1->Get_enlace();
    }
}
void Lista:: Ordenar_Ascendente(){
    Nodo* aux=Get_cabeza();
    Nodo* aux1;
    while(aux!=NULL){
        int num;
        aux1=aux;
        while(aux1!=NULL)
        {
            if(aux->Get_numero() >= aux1->Get_numero()){
                num=aux->Get_numero();
                aux->Set_numero(aux1->Get_numero());
                aux1->Set_numero(num);

            }
            aux1=aux1->Get_enlace();

        }
        aux1=aux1->Get_enlace();
    }
}
void Lista::Eli_Primer(){
    Nodo* aux =Get_cabeza();
    aux = aux ->Get_enlace();
    Set_cabeza(aux);
}
void Lista::Eli_Ultimo(){
    int ax=0;
    Nodo *aux=Get_cabeza();
    while (ax<i-2){
        aux=aux->Get_enlace();
        ax++;
    }
    aux->Set_enlace(NULL);
}
Lista :: ~Lista() {

}