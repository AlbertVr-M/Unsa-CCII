#include "Nodo.h"

Nodo :: Nodo(){

    Numero=0;
    Enlace=NULL; 
}

void Nodo::Set_numero(int N){
    Numero=N;
}

void Nodo::Set_enlace(Nodo *E){
    Enlace=E;
}

int Nodo::Get_numero(){
    return Numero;
}
Nodo* Nodo::Get_enlace(){
    return Enlace;
}
Nodo::~Nodo(){

}