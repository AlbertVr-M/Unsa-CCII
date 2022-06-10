#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <string>
class Lista{

    private:
        Nodo *Cabeza;
        int i=0;
    public:
        Lista();
        void Set_cabeza(Nodo*);
        Nodo* Get_cabeza();
        Nodo* Get_ultimo();
        void agregar(Nodo*);
        void Ordenar_Descendente();
        void Ordenar_Ascendente();       
        void Eli_Primer();
        void Eli_Ultimo();
        Nodo* Buscar(int);
        void Eliminar(int);
        virtual ~Lista();

    
};


#endif