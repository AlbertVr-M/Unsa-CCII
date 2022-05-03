#include <iostream>
using namespace std;

int main(){
    int numeros, media[20], suma=0;
    cout<<"Cuantos numeros desea ingresar: "<<endl;
    cin>>numeros;
    for(int i =0;i<numeros;i++){
        cout<<"Ingrese el numero"<<i<<endl;
        cin>>media[i];
        suma=media[i]+suma;
    }
    cout<<"La media es :"<<suma/numeros<<endl; 
    return 0;
}