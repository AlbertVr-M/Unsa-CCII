#include <iostream>
using namespace std;

template<typename Datos, typename Datos1>
void Correo(Datos nombre,Datos1 apellido);

int main(){
    cout<<"a, vargas"<<endl;
    Correo('a',"vargas");
    system("pause");
    return 0;
    
}
template<typename Datos, typename Datos1>
void Correo(Datos nombre, Datos1 apellido){

    cout<<nombre<<apellido<<"@unsa.edu.pe"<<endl;
}
