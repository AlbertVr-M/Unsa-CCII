#include <iostream>
#include <string.h>
using namespace std;


int main(){
    char palabra[100];
    int cont=0;
    cout<<"Ingrese la palabra: ";
    cin>>palabra;
    cont =strlen(palabra);

    for(int i = 0;i<cont;i++){
        cout<<palabra[i]<<" ";

    }
    return 0;
        //Albert Vargas Mamani
}