#include <iostream>
using namespace std;
int edad(int anio, int mes, int dia, int anio_naci, int mes_naci, int dia_naci){
    int edad_actual, meses_actual, dia_actual;
    edad_actual=anio-anio_naci;
    meses_actual=mes-mes_naci;
    dia_actual=dia-dia_actual;
    cout<<"Tu edad es :"<<edad_actual<<"-"<<meses_actual<<"-"<<dia_actual;
}

int main(){
    int anio, mes, dia, anio_naci, mes_naci, dia_naci;
    cout<<"Ingrese el año, mes, y dia que nacio: ";
    cin>>anio_naci>>mes_naci>>dia_naci;
    cout<<"Ingrese la fecha actual ";
    cin>>anio>>mes>>dia;
    edad(anio,mes,dia,anio_naci,mes_naci,dia_naci);
    return 0;
}