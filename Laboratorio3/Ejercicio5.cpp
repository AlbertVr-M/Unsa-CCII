#include <iostream>
using namespace std;
int esta_en(int n){
    if (n>=0 && n<=100){
        cout<<"El valor si esta entre los valores comprendidos"<<endl;
    }
    else 
        cout<<"No esta comprendido entre los valores de 1 y 100"<<endl;
}
int es_par(int n){
    if(n%2==0){
        cout<<"El valor si es par"<<endl;
    }
    else 
        cout<<"el valor no es par"<<endl;
}
int suma_impares(int n){
    int suma=0;
    for(int i=1;i<n;i++){
        if(i%2!=0){
            suma=suma+i;
        }
    }
    cout<<"La suma de impares es :"<<suma;
}

int main(){
    int n1;
    cout<<"Ingrese un valor: ";
    cin>>n1;
    esta_en(n1);
    es_par(n1);
    suma_impares(n1);
    return 0;
    
}