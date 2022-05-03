#include <iostream>
using namespace std;

int main(){
    int numero[10], suma=0;
    for(int i=0;i<9;i++){
        cout<<"Ingrese los numeros"<<endl;
        cin>>numero[i];
        if(numero[i]<0){
            suma=numero[i]+suma;
        }
        
    }
    cout<<"[";
    for(int i=0;i<9;i++){
        cout<<" "<<numero[i];
    }
    cout<<" ]";
    
    cout<<"\nLa suma de los negativos es: "<<suma;
    return 0;
}