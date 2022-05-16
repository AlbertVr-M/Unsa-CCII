/*3. Implemente un programa con clases que lea la fecha de nacimiento y la fecha de hoy
y muestre por pantalla el nombre y la edad de la persona.*/

#include "Fecha.h"
#include <iostream>
using namespace std;


int main(){
    int anio_actual{}, anio_na{}, mes_actual{}, mes_naci{};
    int anio{}, mes{};
    string nombre;
    cout<<"Ingrese su nombre: "<<endl;
    cin>>nombre;
    cout<<"Ingrese el año actual: "<<endl;
    cin>>anio_actual;
    cout<<"Ingrese el mes actual: "<<endl;
    cin>>mes_actual;
    cout<<"Ingrese el año de nacimiento : "<<endl;
    cin>>anio_na;
    cout<<"Ingrese el mes de nacimiento : "<<endl;
    cin>>mes_naci;


    anio=anio_actual-anio_na;
    mes=mes_actual-mes_naci;
    Fecha f1 = Fecha(nombre,anio,mes);
    f1.edad_actual();
    system("pause");
    return 0;
}