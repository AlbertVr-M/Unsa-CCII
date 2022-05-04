#include <iostream>
using namespace std;
bool buscar(int vector[8],int n){
    
    for(int i=0;i<8;i++){
        int buscarele=vector[i];
        if(buscarele==n){
            return true;
        }
        
        
    }
    return false;
   
}

int main(){
    int vector[8], n;
    cout<<"Ingresa los numeros que deseas en el Vector: "<<endl;
    for(int i=0;i<8;i++){
        cin>>vector[i];


    }
    cout<<"Que numero quieres buscar? ";
    cin>>n;
    cout<<buscar(vector,n);

    return 0;
}