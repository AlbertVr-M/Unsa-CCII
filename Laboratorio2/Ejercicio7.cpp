#include <iostream>

using namespace std;

int main (){
    int estudiantes, n1=0,n2=0,n3=0,suma=0;
    cout<<"Ingrese la cantidad de estudiantes: "<<endl;
    cin>>estudiantes;
    for(int i =1;i<= estudiantes;i++){
        cout<<"Ingrese la primer nota: "<<"del estudiante "<<i<<endl;
        cin>>n1;
        cout<<"Ingrese la segunda nota: "<<"del estudiante "<<i<<endl;
        cin>>n2;
        cout<<"Ingrese la tercer nota: "<<"del estudiante "<<i<<endl;
        cin>>n3;
        suma=(n1+n2+n3)/3;
        cout<<"Promedio del estudiante numero "<<i<<" es "<<suma<<endl;

    }
   
    return 0;
}
