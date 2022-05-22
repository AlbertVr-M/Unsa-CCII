#include "ClaseRectanglo.h"
#include <iostream>
using namespace std;
ClaseRectanglo::ClaseRectanglo(string _color, string _nombreForma, float _ladoMayor, float _ladoMenor, float _factorTamanio):ClaseForma(_color,_nombreForma){
    ladoMayor=_ladoMayor;
    ladoMenor=_ladoMenor;
    factorTamanio=_factorTamanio;

}
ClaseRectanglo::~ClaseRectanglo(){

}

void ClaseRectanglo :: imprimir(){
    ClaseForma::imprimir();
    cout<<"\nEl lado mayor es: "<<ladoMayor<<endl;
    cout<<"\nEl lado menor es: "<<ladoMenor<<endl;
    cout<<"\nEl area del Rectangulo es: "<<ladoMayor*ladoMenor<<endl;
    cout<<"\n";
    cout<<"El perimetro del Rectangulo es "<< (2*ladoMayor)+(2*ladoMenor)<<endl;
    cout<<"\n";
    cout<<"El factor de tamaño es : "<<factorTamanio<<endl;
    cout<<"\n";
    if(factorTamanio==0.5){
        
        cout<<"El tamaño de los lados del Rectangulo cambian a lamitad de su valor, Lado Mayor= "<<ladoMayor/2<<" y el Lado Menor ="<<ladoMenor/2;
    }
    else {
        cout<<"El tamaño de los lados del Rectangulo cambian su valor por  "<<factorTamanio<<endl;
        cout<<"El nuevo lado Mayor es "<<ladoMayor*factorTamanio<<" y el nuevo Lado Menor "<<ladoMenor*factorTamanio;
    }
   
}
