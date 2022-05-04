#include "iostream"
using namespace std;
int main(){
    string nombre[5];
    string apellidos[5];
    string dni[5];
    string edad[5];
    cout << "Por favor ingrese la siguiente información de las personass: \n";
    for(int i = 0; i < 3; i++){
        cout << "\n******* Persona " << i + 1 <<"********:\n";
        cout << "Nombre: ";
        cin >> nombre[i];
        cout << "apellidos: ";
        cin>>apellidos[i];
        //getline(cin,apellidos[i]); no me funciona con el getline
        cout<<" DNI: ";
        cin>>dni[i];
        cout<<"Edad: ";
        cin>>edad[i];
    }
    cout<<"\nLos datos de las Personas son: "<<endl;
    for(int i=0;i<3;i++){ 
        cout<<nombre[i]<<"-";
        cout<<apellidos[i]<<"-";
        cout<<dni[i]<<"-";
        cout<<edad[i]<<endl;
    }
	return 0;
}