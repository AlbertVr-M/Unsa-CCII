#include <iostream>
using namespace std;

template <int N>
struct Binario{
    enum{value = N%2 + 10*Binario<N/2>::value};
};

template <>
struct Binario<0>{
    enum{value=0};
};

int main(){
    int x= Binario<245>::value;
    cout<<"El numero 245 en binario es: "<<x<<endl;
    system("pause");
    return 0;
   
}
//Albert Vargas Mamani