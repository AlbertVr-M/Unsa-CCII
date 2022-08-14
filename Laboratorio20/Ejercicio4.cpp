#include <iostream>
#include <memory>
using namespace std;
class Point{
    private:
	    double x{}, y{};
    public:
        Point(double x, double y) : x(x), y(y) {};
        ~Point(){cout << "Destructor tipo Point";}
        void X(double x){
            this->x = x;
        }
        void Y(double y){
            this->y = y;
        }
        void mostrar(){
            cout << "(" << x << ", " << y << ")";
        }
};
class C1{
private:
	shared_ptr<Point> d;
public:
	C1(shared_ptr<Point> value) : d(value) {}

	void mostrar() const {
		cout << "Valor "; 
		(*d).mostrar();
	}
    virtual ~C1() {cout << "C1 destructor\n";}
};
class C2{
private:
	shared_ptr<Point> d;
public:
	C2(shared_ptr<Point> value) : d(value) {}
	void mostrar() const { 
		cout << "Valor "; 
		(*d).mostrar();
	}
    virtual ~C2() {cout << "C2 destructor\n";}
};
int main(){
	shared_ptr<Point> val_compartido = make_shared<Point>(1.5, 4.0); 
	C1 c1(val_compartido);
    c1.mostrar();
	cout<<endl;
	C2 c2(val_compartido);
	c2.mostrar();
	cout<<endl;
	
	return 0;
}
//Albert Vargas Mamani