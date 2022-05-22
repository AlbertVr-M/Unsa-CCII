#include "ClaseObjeto.h"
#include <iostream>
using namespace std;

ClaseObjeto :: ClaseObjeto(string _objeto,string material):ClaseMaterial(material){

    objeto=_objeto;

}

ClaseObjeto ::  ~ClaseObjeto(){

}
void ClaseObjeto::mostrarObjetoVerde(){
    cout<<objeto<<" de color "<<verde<<" y material de "<<material<<endl;

}
void ClaseObjeto::mostrarObjetoRojo(){
    cout<<objeto<<" de color "<<rojo<<" y material de "<<material<<endl;

}
void ClaseObjeto::mostrarObjetoAzul(){
    cout<<objeto<<" de color "<<azul<<" y material de "<<material<<endl;

}