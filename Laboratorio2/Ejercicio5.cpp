#include <iostream>
using namespace std;

int main (){
    int numeros, contador=0, cont=1,media=0, n1[100];
    cout<<"Ingrese la cantidad de numeros: "<<endl;
    cin>>numeros;
    for(int i=1;i<=numeros;i++){

        cout<<"Ingrese el numero "<<i<<endl;
        cin>>n1[i];

        

        if(contador<n1[i]){
            
            contador=n1[i];
        }
        if(cont>n1[i]){
            
            cont=n1[i];
        }
        else
        cont=n1[1];
        media=n1[i]+media;

        

    }
    cout<<"El menor es "<<cont<<endl;
    cout<<"El mayor es "<<contador<<endl;
    cout<<"La media es "<<media/numeros;
    


    return 0;
     //Albert Vargas Mamani
}