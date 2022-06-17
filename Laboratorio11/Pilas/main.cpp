#include <iostream>
#include "Pila.h"
using namespace std;
int main(){
    int opcion;
    Pila p1= Pila();
    do
    {
        system ("cls");
        cout<<" 1. Insertar \n";
        cout<<" 2. Mostrar\n";
        cout<<" 3. Buscar\n";
        cout<<" 4. Eliminar\n";
        cout<<" 5. Salir\n";
        cout<<" Ingrese una opcion \n";
        cin>>opcion;
        if(opcion==1){
            int nmr;
            system("cls");
            cout<<" Ingrese un numero "<<endl;
            cin>>nmr;
            p1.insertar(nmr);
            system("pause");
            
        }
        else if(opcion == 2){
            system("cls");
            cout<<"Pila "<<endl;
            p1.mostrar();
            system("pause");
        }
        else if(opcion==3){
            int n;
            system("cls");
            cout<<"Ingresa el valor a buscar"<<endl;
            cin>>n;
            if(p1.buscar(n)==n){
                cout<<"El numero si esta en la Pila "<<endl;
            }
            else
                cout<<"El numero no esta en la Pila"<<endl;
            //cout<<p1.buscar(n)<<endl;
            system("pause");
        }
        else if(opcion ==4){
            system("cls");
            cout<<"El valor fue eliminado"<<endl;
            p1.eliminar();
            system("pause");

        }

    } while (opcion !=5);
    
}
//ALBERT VARGAS MAMANI