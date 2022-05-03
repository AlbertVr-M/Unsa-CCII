#include <iostream>
using namespace std;

int main(){
    int numero=0;
    short numero_binario[8];
    cout<<"Ingrese un numero: "<<endl; 
    cin>>numero;
    if(numero >100){
        for(int i=0; i<8;i++){
            numero_binario[i]=numero%2;
            numero /= 2;

        }
        cout<<"El numero en binario es: "<<endl;
        for(int i=7; i>=0; i--){
            cout<<numero_binario[i];
        }

    }
    else{
        cout<<"Vuelva a correr el programa: ";
        
    }
    //Albert Vargas Mamani
    return 0;
}