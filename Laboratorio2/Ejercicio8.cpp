#include <iostream>

using namespace std;

int main(){
    int n1=0,numero=0;
    cout<<"De que numero desea la tabla de multiplicar? ";
    cin>>numero;
    cout<<"Hasta que numero desea la tabla de multiplicar?";
    cin>>n1;
    cout<<"La tabla de multiplicar del "<<numero<<" es "<<endl;
    for(int i=0;i<=n1;i++){
        cout<<numero<<" por "<<i<<" es :"<<i*numero<<endl;

    }


    return 0;
}