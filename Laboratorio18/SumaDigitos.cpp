#include <iostream>
using namespace std;
 
template<int N>
struct SumaDigitos{

    enum{value = N % 10 + SumaDigitos<N/10>::value};

};
template <>
struct SumaDigitos<0> {
    enum{ value = 0};

};

int main(){
    cout<<"La suma de Digitos del numero 12345 es: ";
    int x= SumaDigitos<12345>::value;
    cout<<x<<endl;
    system("pause");
}
//Albert Vargas Mamani