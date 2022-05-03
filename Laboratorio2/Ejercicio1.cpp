#include <iostream>
using namespace std;

int main(){
    int suma=0;
    cout<<"Suma de numeros pares hasta el 100"<<endl;
    for(int i=2;i<=100;i=i+2){
        suma = i + suma;
    }
    
    cout<<"La suma de los numeros es: "<<suma;

    return 0;
}
