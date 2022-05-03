#include <iostream>
using namespace std;

int primo(int n){
    int es_primo=0;
    for(int i =2;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                es_primo++;
            }
        }
        if(es_primo==2){
            cout<<i<<" es un numero numero primo "<<endl;
        }
        es_primo=0;
    }

}
int main(){
    int numero1;
    cout<<"Ingrese hasta cuantos primos desea: ";
    cin>>numero1;
    primo(numero1);

    return 0;
  //Albert Vargas Mamani
}