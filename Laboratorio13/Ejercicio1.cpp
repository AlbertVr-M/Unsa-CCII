#include <iostream>
using namespace std;

struct cumple{
    int dia;
    int mes;
    int anio;
    char nombre[15];
}personas[100];

int main(){

    cout<<"\n01.Enero "<<endl;
    cout<<"02.Febrero "<<endl;
    cout<<"03.Marzo "<<endl;
    cout<<"04.Abril "<<endl;
    cout<<"05.Mayo "<<endl;
    cout<<"06.Junio "<<endl;
    cout<<"07.Julio "<<endl;
    cout<<"08.Agosto "<<endl;
    cout<<"09.Septiembre "<<endl;
    cout<<"10.Octubre "<<endl;
    cout<<"11.Noviembre "<<endl;
    cout<<"12.Diciembre "<<endl;

    int mes_actual;
    int nro=0;
        cout<<"Que mes estamos ? "<<endl;
        cin>>mes_actual;
        cout<<"Cuantas personas quiere ingresar"<<endl;
        cin>>nro;
        for(int i=0;i<nro;i++){
            cout<<"Ingrese su nombre: "<<endl;
            cin>>personas[i].nombre;
            cout<<"\nDigite el dia que nacio: "<<endl;
            cin>>personas[i].dia;
            cout<<"\nIngrese el mes que nacio: "<<endl;
            cin>>personas[i].mes;
            cout<<"\nIngrese el año que nacio:"<<endl;
            cin>>personas[i].anio;
        }
        cout<<"Las personas que cumplen años este mes son: "<<endl;
        for(int j=0;j<nro;j++){
            if(personas[j].mes == mes_actual){
                
                cout<<"-"<<personas[j].nombre<<" cumple años el  "<<personas[j].dia<<" de "<<personas[j].mes<<endl;
            }
        }
            
    return 0;
}
//ALBERT VARGAS MAMANI