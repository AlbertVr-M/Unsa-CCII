#ifndef NODO_H
#define NODO_H
#include <string>
class Nodo{
    private:
        int Numero;
        Nodo *Enlace;
    public:
        Nodo();
        void Set_numero(int);
        void Set_enlace(Nodo*);
        int Get_numero();
        Nodo* Get_enlace();
        virtual ~Nodo();



};

#endif