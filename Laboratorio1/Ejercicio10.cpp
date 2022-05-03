#include <iostream>
using namespace std;

int main(){
    string contrasena, clave;
    cout<<"Ingrese su contraseña: ";
    cin>>contrasena;

    do{
        cout<<"Ingrese su clave: "; cin>>clave;
           
    }
    while(contrasena !=clave);
    cout<<"Clave correcta!!!";

    return 0;
}