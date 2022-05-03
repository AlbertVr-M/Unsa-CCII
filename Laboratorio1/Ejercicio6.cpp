#include <iostream>
using namespace std;

int main(){
    int numero=0;
    short binario[8];
    cout<<"Ingrese un numero: "<<endl; 
    cin>>numero;
    if(numero >100){
        for(int i=0; i<8;i++){
            binario[i]=numero%2;
            numero /= 2;

        }
        cout<<"El numero en binario es: "<<endl;
        for(int i=7; i>=0; i--){
            cout<<binario[i];
        }

    }
    else{
        cout<<"Vuelva a correr el programa: ";
        
    }
    
    return 0;
}