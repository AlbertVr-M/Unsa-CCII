#ifndef PILA_H
#define PILA_H
#include "Nodo.h"
class Pila{

    public:
        Nodo *Cabeza;
        int tamanio;
        Pila();
        ~Pila();
        void insertar(int n);
        void mostrar();
        void eliminar();
        int buscar(int);
};

#endif
//ALBERT VARGAS MAMANI