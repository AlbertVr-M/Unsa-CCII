
#include<iostream>

using namespace std;

int main(){
	int numeros[100][100],filas,columnas,suma1=0, suma2=0, suma3=0;
	
	cout<<"Escriba el numero de filas: "; cin>>filas;
	cout<<"Escriba el numero de columnas: "; cin>>columnas;
	
	//Rellenando la matriz	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Escriba el numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	} 
	
	cout<<"\nMostrando matriz\n\n";
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
            suma1=numeros[0][0]+numeros[0][1]+numeros[0][2];
            suma2=numeros[1][0]+numeros[1][1]+numeros[1][2];
            suma3=numeros[2][0]+numeros[2][1]+numeros[2][2];

		}
		cout<<"\n";

	}
    if(suma1>suma2 && suma1>suma3){
        cout<<"La mayor fila es 1 y es igual a = "<<suma1;
    }
    else if(suma2>suma1 && suma2>suma3){
        cout<<"La mayor fila es 2 y es igual a ="<<suma2;

    }
    else
        cout<<"La mayor fila es la fila 3 y es igual a ="<<suma3;
	
	
	
	return 0;
}