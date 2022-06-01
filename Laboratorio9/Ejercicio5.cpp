#include <iostream>

using namespace std;

template<typename T>
void intercambiar(T &dato1, T &dato2);


template <typename T >
void ordenarAscendente(T *arreglo, int n){
    for(int i = 0;i<n;i++){
        for(int j=0; j<(n-1);j++){
            if(arreglo[j]>arreglo[j+1])
                intercambiar(arreglo[j],arreglo[j+1]);
        }
    }
}

template <typename T >
void ordenarDescendente(T *arreglo, int n){
    for(int i = 0;i<n;i++){
        for(int j=0; j<(n-1);j++){
            if(arreglo[j]<arreglo[j+1])
                intercambiar(arreglo[j],arreglo[j+1]);
        }
    }
}

template<typename T>
void ingresar_Datos(T *arreglo, int n);
template<typename T>
void mostrar_Datos(T *arreglo, int n);


int main(){
    int numero_elementos;

    cout<<"Cantidad de elementos de arreglo: "<<endl;
    cin>>numero_elementos;

    int *arreglo= new int [numero_elementos];
    
    
    cout<<"Ingresando datos del arreglo: "<<endl;
    ingresar_Datos(arreglo,numero_elementos);


    cout<<"Ordenando Ascendentemente "<<endl;
    ordenarAscendente(arreglo,numero_elementos);

    mostrar_Datos(arreglo,numero_elementos);
    cout<<"Ordenado Descendentemente"<<endl;
    ordenarDescendente(arreglo,numero_elementos);
    mostrar_Datos(arreglo,numero_elementos);
    delete[] arreglo;
    return 0;
}

template<typename T>
void ingresar_Datos(T *arreglo, int n){
    for(int i =0; i<n;i++){
        cout<<"Ingrese un elemento del arreglo["<<i<<"]:"<<endl;
        cin>>arreglo[i];
    }

}

template<typename T>
void mostrar_Datos(T *arreglo, int n){
    for(int i =0; i<n;i++){
        cout<<"Elemento["<<i<<"]:"<<arreglo[i]<<endl;
      
    }
 
}

template<typename T>
void intercambiar(T &dato1, T &dato2){
    T aux;

    aux=dato1;
    dato1=dato2;
    dato2=aux;
}