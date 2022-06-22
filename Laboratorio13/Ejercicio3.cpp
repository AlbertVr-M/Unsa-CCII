#include <iostream>
using namespace std;

struct deportistas{
    char nombre[15];
    int edad;
    float talla;


}jugadores[10];

int main(){
    for(int i =0;i<5;i++){
        cout<<"Ingrese el nombre del jugador: "<<endl;
        cin>>jugadores[i].nombre;
        cout<<"Ingrese la edad del jugador: "<<endl;
        cin>>jugadores[i].edad;        
        cout<<"Ingrese la talla del jugador: "<<endl;
        cin>>jugadores[i].talla;
    }
    for(int i=0;i<5;i++){
        if((jugadores[i].edad<20)&&(jugadores[i].talla>1.70)){
            cout<<"El nombre del jugador seleccionado es "<<jugadores[i].nombre<<" y mide "<<jugadores[i].talla<<endl;
        }
    }
    return 0;
}
//ALBERT VARGAS MAMANI