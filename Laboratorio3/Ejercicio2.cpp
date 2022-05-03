#include <iostream>
using namespace std;
bool bisiesto(int anio){
    if(anio%4 == 0 and anio%100 != 0 or anio%400 == 0){
        cout<<"Es bisiesto";
        return true;
    }else 
    return false;
        

}
int main(){
   int anio;
   cout << "Introduce a"<<(char)164 <<"o: ";
   cin >> anio;
   bisiesto(anio);

}

