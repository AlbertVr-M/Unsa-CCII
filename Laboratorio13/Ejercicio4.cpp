#include <iostream>
using namespace std;

struct empresa{
    char nombre[15];
    char sexo;
    float sueldo;


}empleados[100];

int main(){
    int n=0,aux=0,mayor=0,menor=0;
    cout<<"Cuantos empleados trabajan en la empresa? "<<endl;
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<"Ingrese el nombre del empleado: "<<endl;
        cin>>empleados[i].nombre;
        cout<<"Ingrese el sexo del empleado: "<<endl;
        cin>>empleados[i].sexo;
        cout<<"Ingrese el sueldo del empleado: "<<endl;
        cin>>empleados[i].sueldo;
        if(empleados[i].sueldo>mayor){
            mayor=empleados[i].sueldo;
        }
      
        
    }
      menor = mayor;
    for(int i=0;i<n;i++){
        if(menor>empleados[i].sueldo){
            menor=empleados[i].sueldo;
        }
    }
    for(int i=0;i<n;i++){
        if(empleados[i].sueldo==mayor){
            cout<<"El empleado con mayor sueldo es "<<empleados[i].nombre<< " y gana "<<empleados[i].sueldo<<endl;
        }
    }
    for(int i=0;i<n;i++){
        if(empleados[i].sueldo==menor){
            cout<<"El empleado con menor sueldo es "<<empleados[i].nombre<< " y gana "<<empleados[i].sueldo<<endl;
        }
    }    
    
    
    
     //cout<<"\nEl empleado de menor sueldo es "<<empleados[0].sueldo<<endl;
       // cout<<"El empleado con mayor sueldo es "<<empleados[n-1].sueldo;
    
    return 0;
}
//ALBERT VARGAS MAMANI