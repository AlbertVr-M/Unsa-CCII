#include <iostream>
using namespace std;

template<typename S>
void Menor(S numero);
template<typename D>
void Mayor(D numero1);

int main(){
    int A[5];
    float B[5];
    Mayor (A[5]);
    Menor(A[5]);
    system("pause");
    return 0;
}

template<typename D>
void Mayor(D numero1){
        D numeros[5], mayor=0;
    	for(int i=0;i<5;i++){
		cout<<i+1<<". Ingrese un numero: ";
		cin>>numeros[i]; 
		
		if(numeros[i] > mayor){ 
			mayor = numeros[i];
		}
	}
	
	cout<<"\nEl mayor elemento del arreglo es: "<<mayor<<endl;
}


template <typename S>
void Menor(S numero){

        S numeros[5], menor,mayor=0;

       
    	for(int i=0;i<5;i++){
		cout<<i+1<<". Ingrese un numero: ";
		cin>>numeros[i]; 
		
		if(numeros[i] > mayor){ 
			mayor = numeros[i];
		}
	}      

    menor=mayor;
    	for(int i=0;i<5;i++){
		if(numeros[i] < menor){ 
			menor = numeros[i];
		}
	}
	
	cout<<"\nEl menor elemento del arreglo es: "<<menor<<endl;
}

