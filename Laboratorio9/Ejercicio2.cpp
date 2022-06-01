#include <iostream>
using namespace std;

template<typename O>
void Operaciones(O numero1, O numero2);

int main(){
    cout<<"5,2"<<endl;
    Operaciones(5,2);
    system("pause");
    return 0;
}

template<typename O>
void Operaciones(O numero1, O numero2){

    cout<<"La suma es: "<<numero1+numero2<<endl;
    if(numero1>numero2){
        cout<<"La resta es "<<numero1-numero2<<endl;
    }else
        cout<<"La resta es"<<numero2-numero1<<endl;
    cout<<"La multiplicacion es: "<<numero1*numero2<<endl;
    if(numero1>numero2){
        cout<<"La division es:"<<numero1/numero2<<endl;
    }
    else   
        cout<<"La division es:"<<numero2/numero1<<endl;
    
}