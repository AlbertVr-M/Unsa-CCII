/*1. Asignar valores a dos variables enteras, intercambie estos valores almacenados
usando solo punteros a enteros.*/
#include <iostream>
using namespace std;

void intercambiar(int* a, int* b){
    int ax= *a;
        *a=*b;
        *b=ax;

}
int main(){
    int a{},b{};
    cout<<"Ingrese el primer valor: "<<endl;
    cin>>a;
    cout<<"Ingrese el segundo valor: "<<endl;
    cin>>b;
    cout<<"\nValores antes de cambiar de a="<<a<<" y b= "<<b<<endl;
    intercambiar(&a,&b);
    cout<<"\nValores despues de intercambiar de a="<<a<<" y b= "<<b<<endl;
    system("pause");
    return 0;
}
/*Albert Vargas Mamani*/