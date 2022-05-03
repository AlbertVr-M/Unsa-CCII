#include <iostream>
using namespace std;

int main(){

    int n1, n2;
    cout<<"Ingrese el primer numero:"<<endl;
    cin>>n1;
    cout<<"Ingrese el segundo numero:"<<endl;
    cin>>n2;
    if(n1%n2==0){
        cout<<n2<<" Es divisor de  "<<n1;
    }
    else if(n2%n1==0){
        cout<<n1<<" Es divisor de "<<n2;

    }
    else{
        cout<<"Ningun de los dos numeros es divisor entre si";
    }

    return 0;
}