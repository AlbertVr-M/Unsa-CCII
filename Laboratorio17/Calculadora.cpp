#include <iostream>
using namespace std;

template <typename C>
class Calculadora{
    private:
        C num1, num2;

    public:
        Calculadora(C n1, C n2) :
        num1(n1), num2(n2){};
        void operaciones();
        C suma();
        C resta();
        C multiplicacion();
        C division();
};


template <typename T>
void Calculadora<T>::operaciones(){

    cout <<"\n    "<<num1 << " y " << num2 <<endl;
    cout <<"\n- "<<num1 << " + " << num2 << " = " << suma() <<endl;
    cout <<"- "<<num1 << " - " << num2 << " = " << resta() <<endl;
    cout <<"- "<<num1 << " * " << num2 << " = " << multiplicacion() <<endl;
    cout <<"- "<<num1 << " / " << num2 << " = " << division() <<endl;
}

template <typename T>
T Calculadora<T>::suma(){ 
    return num1 + num2;
}

template <typename T>
T Calculadora<T>::resta(){ 
    return num1 - num2; 
}

template <typename T>
T Calculadora<T>::multiplicacion(){ 
    return num1 * num2; 
}

template <typename T>
T Calculadora<T>::division(){ 
    return num1 / num2; 
}

int main(){

    
    Calculadora<int> CalcEnt(5, 6);
    Calculadora<float> CalcFloat(2.5, 5.8);

    
    CalcEnt.operaciones();

    
    CalcFloat.operaciones();

    return 0;
}
//Albert Vargas Mamani