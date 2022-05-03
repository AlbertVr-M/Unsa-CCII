#include <iostream>
using namespace std;

int main(){
    int numero, ast=1;
    cout<<"Ingrese cuantas veces se quiere repetir"<<endl;
    cin>>numero;
    for(int i =1;i<=numero;i++){
        for(int j=0;j<ast;j++){
            cout<<"*";
        }
        cout<<"\n";
        ast++;
    }
    return 0;
     //Albert Vargas Mamani
}