#include <iostream>
using namespace std;
int potencia(int base,int exponente);
int main(){
    int base,exponente;
    regresoBase:
    cout<<"Humano ingresa un numero base mayor a 1:";cin>>base;
    if(base<1){
        cout<<"Humano tonto ingresa un numero mayor o igual a 1.\n";
        goto regresoBase;
    }
    regresoExponente:
    cout<<"Humano ingresa un numero exponente mayor a 1:";cin>>exponente;
    if(exponente<1){
        cout<<"Humano tonto ingresa un numero mayor o igual a 1.\n";
        goto regresoExponente;
    }
    cout<<"Humano aqui esta tu pinch.. resultado: "<<potencia(base,exponente)<<"\n";
    system("pause");
    return 0;
}
int potencia(int base,int exponente){
    int pot=0;
    if(exponente==1){
        pot=base;
    }else{
        pot=base*potencia(base,exponente-1);
    }
    return pot;
}