#include <iostream>
using namespace std;

template<int N, int P>
struct Potencia{
    enum{value = N*Potencia<N,P-1>::value};
};
template <int N>
struct Potencia<N,0>{

    enum{value = 1};
};

int main(){
    int x=Potencia<3,5>::value;
    cout<<"La potencia de 3 a la 5 es "<<x<<endl;
    system("pause");
}
//Albert Vargas Mamani