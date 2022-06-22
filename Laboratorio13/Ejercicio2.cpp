#include <iostream>
using namespace std;

struct promedio{
    char nombre[15];
    char grupo;
    float nota1;
    float nota2;
    float nota3;
    float proyecto_final;
    float promedio;
}personas[100];

int main(){
    int n;
    cout<<"Cuantos alumnos quiere ingresar? "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Ingrese el nombre del alumno: "<<endl;
        cin>>personas[i].nombre;
        cout<<"\nIngrese el grupo en el que esta: "<<endl;
        cin>>personas[i].grupo;
        cout<<"\nIngrese la nota de la primera fase: "<<endl;
        cin>>personas[i].nota1;
        cout<<"Ingrese la nota de la segunda fase: "<<endl;
        cin>>personas[i].nota2;
        cout<<"Ingrese la nota de la tercera fase: "<<endl;
        cin>>personas[i].nota3;
        cout<<"Ingrese del proyecto final: "<<endl;
        cin>>personas[i].proyecto_final;
        personas[i].promedio=((personas[i].nota1*0.15)+(personas[i].nota2*0.20)+(personas[i].nota3*0.25)+personas[i].proyecto_final*0.40);
    }
    for(int i=0;i<n;i++){
        if(personas[i].promedio>=11)
            cout<<"El Alumno "<<personas[i].nombre<<" del grupo "<<personas[i].grupo<<" aprobo el curso con un promedio de "<<personas[i].promedio<<endl;
        else
            cout<<"El Alumno "<<personas[i].nombre<<" del grupo "<<personas[i].grupo<<" desaprobo el curso con un promedio de "<<personas[i].promedio<<endl;
        
        
    }   

    return 0;
}
//ALBERT VARGAS MAMANI