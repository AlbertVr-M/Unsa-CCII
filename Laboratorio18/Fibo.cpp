#include <iostream>
using namespace std;

template<int N>
struct Fibonacci{

    enum {value = Fibonacci<N-1 > ::value + Fibonacci<N-2>::value};
};
template <>
struct Fibonacci <0>{
    enum{value =0};
};
template <>
struct Fibonacci <1>{
    enum{value = 1};
};

int main (){

    cout << Fibonacci<0>::value <<"-";
    cout << Fibonacci<1>::value <<"-";
    cout << Fibonacci<2>::value <<"-";
    cout << Fibonacci<3>::value <<"-";
    cout << Fibonacci<4>::value <<"-";
    cout << Fibonacci<5>::value <<"-";
    cout << Fibonacci<6>::value <<"-";
    cout << Fibonacci<7>::value <<""<<endl;
    system("pause");
    return 0;
}
//Albert Vargas Mamani
