#include <iostream>
#include "Nodo.h"
#include "Lista.h"
#include "Windows.h"
#include <conio.h>
using namespace std;

char Menu(){
    char Opcion=' ';
    do{
        cout<<"\tMenu\n\n";
        cout<<"1.  Agregar\n";
        cout<<"2.  Eliminar Primero\n";
        cout<<"3.  Mostrar\n";
        cout<<"4.  Buscar\n";
        cout<<"5.  Eliminar\n";
        cout<<"6.  Eliminar Ultimo\n\n";
        cout<<"7.  Ordenar Descendentemente\n\n";
        cout<<"8.  Ordenar Asendentemente\n\n";
        cout<<"9.  Salir\n\n";
        cin>>Opcion;
        if((Opcion <'1')|| (Opcion > '9')){
            system("cls");
            cout<<"Opcion Invalida";
            getch();
            system("cls");
        }

    }while((Opcion<'1') || (Opcion>'9'));
    return Opcion;

}

int main(){

    char Opcion =' ';
    Nodo *Aux = NULL;
    Nodo *Temp = NULL;
    Lista *Cadena= new Lista();
    int Numero=0;
    do{
        Opcion=Menu();
        system("cls");
        switch (Opcion){
            case '1':
                cout<<"Agregar\n\n";
                Aux = new Nodo();
                cout<<"Ingrese el nuevo numero ";
                cin>>Numero;
                Aux->Set_numero(Numero);
                Cadena->agregar(Aux);
                cout<<"Numero ingresado correctamente ";
                break;
            case '2':
                cout<<"Eliminar Primero\n\n";
                cout<<"Numero eliminado exitosamente.";
                Cadena->Eli_Primer();
                break;
            case '3':
                cout<<"Mostrar\n\n";
                Temp=Cadena->Get_cabeza();
                while(Temp != NULL){
                    cout<<Temp->Get_numero()<<" - ";
                    Temp=Temp->Get_enlace();
                }
                Aux = new Nodo();
                break;
            case '4':
                cout<<"Buscar\n\n";
                cout<<"Por favor ingrese el numero a buscar: ";
                cin>>Numero;
                Temp= Cadena->Buscar(Numero);
                if(Temp=NULL)
                    cout<<"El numero fue encontrado y es:  "<<Temp->Get_numero(); 
                else
                    cout<<"El numero no fue encontrado o no existe";
                break;
            case '5':
                cout<<"Eliminar\n\n";
                cout<<"Ingrese el numero a eliminar: ";
                cin>>Numero;
                Temp= Cadena->Buscar(Numero);
                if(Temp != NULL){
                    Cadena->Eliminar(Numero);
                    cout<<"Numero eliminado exitosamente.";
                }
                else
                    cout<<"El numero no fue encontrado o no existe";
                break;
            case '6':
                cout<<"Eliminar Ultimo\n\n";
                cout<<"El ultimo numero fue eliminado ";
                Cadena->Eli_Ultimo();
                Temp=Cadena->Get_cabeza();
                break;
            case '7':
                cout<<"Ordenar Descendentemente \n\n";
                Cadena->Ordenar_Descendente();
                Temp=Cadena->Get_cabeza();
                while(Temp != NULL){
                    cout<<Temp->Get_numero()<<" - ";
                    Temp=Temp->Get_enlace();
                }
                Aux = new Nodo();               
                break;
            case '8':
                cout<<"Ordenar Asendentemente \n\n";
                Cadena->Ordenar_Ascendente();
                Temp=Cadena->Get_cabeza();
                while(Temp != NULL){
                    cout<<Temp->Get_numero()<<" - ";
                    Temp=Temp->Get_enlace();
                }
                Aux = new Nodo();               
                break;
                             
            case '9':
                cout<<"Fin del programa!!!\n\nGrcias";
                break;               
        }
        getch();
        system("cls");
    }while(Opcion !='9');
    return 0;
}
//ALBERT VARGAS MAMANI