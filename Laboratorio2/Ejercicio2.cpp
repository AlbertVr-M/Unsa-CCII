#include <iostream>
using namespace std;

int main(){
    cout<<"50 primeros numeros primos"<<endl;
    int primo=0;
    for(int i=2;i<=50;i++){
        for(int j=1;j<=i;j++){

            if(i%j==0){
                primo++;
            }
        }
        if (primo==2){
            cout<<i<<" es primo "<<endl;
        }
        primo=0;

    }

    return 0;
     //Albert Vargas Mamani
}