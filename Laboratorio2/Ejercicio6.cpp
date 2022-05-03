#include <iostream>
using namespace std;

int main(){
    int actual=0, siguiente=1, temporal=0, terminos;
    cout<<"Cuantos terminos de la serie fibonacci desea?: "<<endl;
    cin>>terminos;
    for(int i=0;i<terminos;i++){
        cout<<actual<<endl;
        temporal=actual;
        actual=siguiente;
        siguiente=siguiente+temporal;
        
    }


    return 0;
}