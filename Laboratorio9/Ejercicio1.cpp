#include <iostream>
using namespace std;
template <typename M>
void mayorymenor(M numero1, M numero2, M numero3);


int main (){
    cout<<"5,4,2"<<endl;
    mayorymenor(5,4,2);
    system("pause");


    return 0;
}
template <class M>
void mayorymenor(M numero1, M numero2, M numero3){
        cout<<"El mayor es: "<<endl;
            if(numero1>numero2 && numero1>numero3){ 
                cout<<numero1<<endl;
            }else if(numero2>numero1 && numero2> numero3){
                cout<<numero2<<endl;

            }else{ 
                cout<<numero3<<endl;
            }
        cout<<"El menor es: "<<endl;
            if(numero1<numero2 && numero1<numero3){ 
                cout<<numero1<<endl;
            }else if(numero2<numero1 && numero2< numero3){
                cout<<numero2<<endl;

            }else{ 
                cout<<numero3<<endl;

            }
}

//VARGAS MAMANI ALBERT