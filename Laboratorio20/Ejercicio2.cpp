#include <iostream>
#include <memory>
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
	unique_ptr<double> d = make_unique<double>(1.0);//Creamos el unique_ptr d y asiganmos el valor double (1.0) mediante el make_unique. La direccion de memoria se guarda en d.
	cout<<"Variable double *d: "<<*d<<endl;  
	
	unique_ptr<Point> pt = make_unique<Point>(1.0, 2.0);//Creamos el unique_ptr pt y asiganmos los valores double (1.0,2.0) mediante el make_unique. La direccion de memoria se guarda en pt.
	cout<<"Mostrando el punto *pt: ";
	pt->mostrar();
	
	*d = 2.0;//Modificamos el valor de la variable de tipo puntero "d" que es (1.0) a 2.0
	cout<<"Mostrando la variable del tipo double *d: "<<*d<<endl;
    //Funciones miembro de desreferencia y llamada
	(*pt).X(3.0);//Modificamos los valores del tipo Point que guardamos en pt. Sabemos que (*pt).X = pt->X
	(*pt).Y(3.0);
	cout<<"Mostrando punto *pt: ";
	pt->mostrar();
	
	pt->X(3.0);//Modificamos los valores del tipo Point que guardamos en pt. Sabemos que (*pt).X = pt->X
	pt->Y(3.0);//Podemos utilizar operadores para operaciones con punteros
	cout<<"Mostrando punto *pt: ";
	pt->mostrar();

	return 0;
}
//Albert Vargas Mamani