#include <iostream>
#include <string>
using namespace std;

struct Tienda{
	string codigo;
	int precio=0;
	int cantidad=0;
	bool status = false;
	void ingresar(Tienda**&, int, int);
	void cancelar(Tienda**&, int, int, string);
    void mostrar(Tienda**& matriz, int, int);
};
void ingresar(Tienda**& matriz, int f, int c){
	string aux;
	int aux2=0, num=0;
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++, num++){
			cout << "Ingrese el codigo del producto "<< num +1 << ": "; 
			cin >> aux;
			matriz[i][j].codigo = aux;
			cout << "Ingrese el precio del producto: " << num +1<< ": ";
			cin >> aux2;
			matriz[i][j].precio = aux2;		
			cout << "Ingrese la cantidad del Producto: " << num +1 << ": ";
			cin >> aux2;
			matriz[i][j].cantidad = aux2;
			aux = "00" + to_string(num);
			if (matriz[i][j].cantidad > 0)
				matriz[i][j].status=true;
			else
				matriz[i][j].status=false;
		}
	}
}
void cancelar(Tienda**& matriz, int f, int c, string codigo){
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			if (matriz[i][j].codigo == codigo)
			{
				matriz[i][j].cantidad = 0;
				matriz[i][j].status = false;
				
			}
		}
	}
}
bool buscar(Tienda**& matriz, int f, int c,  string& codigo){
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			if (matriz[i][j].codigo == codigo)
				return true;
		}
	}
	return false;
	
}
void mostrar(Tienda**& matriz, int f, int c){
	int num=0;
    int aux3=0;
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++, num++){
            aux3=num;
			cout << "Producto" << aux3+1 <<endl;
			cout<< "Codigo: " << matriz[i][j].codigo << endl;
			cout<< "Precio: " << matriz[i][j].precio << endl;
			cout<< "Cantidad: " << matriz[i][j].cantidad << endl;
			cout<< "Estado: " << matriz[i][j].status << endl << endl;
		}
	}
}

int main(){
	int fil=0, colum=0;
	int opcion=0;
	string aux, aux2;

	cout << "Ingrese el numero de filas a crear: "; 
    cin >> fil;
	cout << "Ingrese el numero de columnas a crear: "; 
    cin >> colum;

	Tienda** M = new Tienda * [fil];
	for (int i = 0; i < fil; i++)
		M[i] = new Tienda[colum];

	cout<<" MENU "<<endl;
	cout<<"1. Ingresar productos"<<endl;
	cout<<"2. Buscar Elemento"<<endl;
	cout<<"3. Mostrar"<<endl;
	cout<<"4. Cancelar producto"<<endl;
	cout<<"5. Salir"<<endl;
	do{
		cout << "Ingrese una opcion: "<<endl; 
		cin >> opcion;
		switch (opcion){
            case 1:
                ingresar(M,fil,colum);
                break;
            
            case 2:
                cout << "Ingrese el codigo del producto a buscar: "<<endl; 
                cin >> aux;
                buscar(M, fil, colum, aux);
            case 3:
                mostrar(M, fil, colum);
                break;      
            case 4:
                cout << "Ingrese el codigo del producto vendido: ";
				cin >> aux;
			    if (!buscar(M, fil, colum, aux)){
				    cout << "No se encontro producto con el codigo digitado \n";
				}
			    else
				    cancelar(M, fil, colum, aux);
			    break;
            case 5:
                cout << "Fin del Programa "; 
                break;
		}
	}while (opcion != 5);

	for (int i = 0; i < fil; i++)
		delete[] M[i];
	delete[] M;

	return 0;


}
//ALBERT VARGAS MAMANI