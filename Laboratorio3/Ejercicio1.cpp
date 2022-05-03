#include<iostream>
using namespace std;
int potencia(int base,int expo){
	int pot;
	if(expo==1){
		pot = base;
	}
	else{
		pot = base*potencia(base,expo-1);
	}
	return pot;
}

int main(){
	int base,exponente;
	cout<<"Escriba la numero base: ";
	cin>>base;
	cout<<"Escriba el exponente: ";
	cin>>exponente;
	cout<<"\nResultado: "<<potencia(base,exponente)<<endl;	
	return 0;
}



