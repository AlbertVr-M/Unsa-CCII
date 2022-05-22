#ifndef ClaseMultimedia_H
#define ClaseMultimedia_H
#include <iostream>
using namespace std;
class ClaseMultimedia{

    protected: 
        string nombre{};
        int tamanio{};

    public:
        ClaseMultimedia(string,int);
        ~ClaseMultimedia();
        void mostrarMultimedia();

};

#endif