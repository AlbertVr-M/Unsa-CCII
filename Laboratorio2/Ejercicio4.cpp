#include <iostream>
using namespace std;

int main(){
    //cout<<"50 primeros numeros primos"<<endl;
    int n1, n2;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>n1;
    cout<<"Ingrese el Segundo numero: "<<endl;
    cin>>n2;
    int primo=0;
    for(n1;n1<=n2;n1++){
        for(int j=1;j<=n1;j++){

            if(n1%j==0){
                primo++;
            }
        }
        if (primo==2){
            cout<<n1<<" es primo "<<endl;
        }
        primo=0;

    }

    return 0;
     //Albert Vargas Mamani
}