#include <iostream>
#include "Cola.h"
using namespace std;
int main(){
    int opcion;
    Cola c1= Cola();
    
    do
    {

        system ("cls");
        cout<< "MENU "<<endl;
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
            c1.ingresar(nmr);
            system("pause");
            
        }
        else if(opcion == 2){
            system("cls");
            cout<<"Pila "<<endl;
            c1.mostrar();
            system("pause");
        }
        else if(opcion==3){
            int n;
            system("cls");
            cout<<"Ingresa el valor a buscar"<<endl;
            cin>>n;
            if(c1.buscar(n)==n){
                cout<<"El numero si esta en la Cola "<<endl;
            }
            else
                cout<<"El numero no esta en la Cola"<<endl;
            //cout<<p1.buscar(n)<<endl;
            system("pause");
        }
        else if(opcion ==4){
            system("cls");
            cout<<"El valor fue eliminado"<<endl;
            c1.eliminar();
            system("pause");

        }

    } while (opcion !=5);
    
}
//ALBERT VARGAS MAMANI