#include <iostream>
using namespace std;
class Point{
    public:
        double x=0, y=0;
        Point(double x, double y) : x(x), y(y) {};

        void X(double x){
            this->x = x;
        }
        void Y(double y){
            this->y = y;
        }
        void mostrar(){
            cout << "(" << x << ", " << y << ")\n";
        }
};
int main() {
    /*
	{
		double* d = new double(1.0);
		Point* pt = new Point(1.0, 2.0);
		*d = 2.0;
		(*pt).X(3.0);
		(*pt).Y(3.0);
		pt->X(3.0);
		pt->Y(3.0);
		delete d;
		delete pt;
	}
    */
	double* d = new double(1.0);    //Creamos una variable dinamica de tipo double y su direccion de memoria se guarda en el puntero d
	cout<<"Variable double *d: "<<*d<<"\n";  
	
	Point* pt = new Point(1.0, 2.0);//Creamos un valor (1.0,2.0) del tipo Point y su direccion de memoria se guarda en el puntero pt
	cout<<"Mostrando el punto *pt: ";
	pt->mostrar();

	*d = 2.0;//Modificamos el valor de la variable de tipo puntero "d" que es (1.0) a 2.0
	cout<<"Mostrando la variable del tipo double *d: "<<*d<<"\n";
	//Funciones miembro de desreferencia y llamada
	(*pt).X(3.0);//Modificamos los valores del tipo Point que guardamos en pt. Sabemos que (*pt).X = pt->X
	(*pt).Y(3.0);
	cout<<"Mostrando punto *pt: ";
	pt->mostrar();
	
	pt->X(3.0);//Modificamos los valores del tipo Point que guardamos en pt. Sabemos que (*pt).X = pt->X
	pt->Y(3.0);//Podemos utilizar operadores para operaciones con punteros
	cout<<"Mostrando punto *pt: ";
	pt->mostrar();
	
	delete d;//Se elimina la memoria almacenada
	delete pt;
	
    
	return 0;
}
//Albert Vargas Mamani