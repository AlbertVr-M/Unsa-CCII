#ifndef COLA_H
#define COLA_H
#include "Nodo.h"
class Cola{

    private:
        int j=0;
    public:
        Nodo *Cabeza;
        int tamanio;
        Cola();
        ~Cola();
        void ingresar(int n);
        void mostrar();
        void eliminar();
        int buscar(int n);
        Nodo* ultimo();


};

#endif
//ALBERT VARGAS MAMANI