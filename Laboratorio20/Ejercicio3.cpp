#include <iostream>
#include <memory>
using namespace std;
class C1{
    private:
        shared_ptr<double> d;
    public:
        C1(shared_ptr<double> value) : d(value) {}
        void mostrar() const { 
            cout <<"Valor " << *d; 
        }
        virtual ~C1() {cout << "C1 destructor\n";}
};
class C2{
    private:
        shared_ptr<double> d;
    public:
        C2(shared_ptr<double> value) : d(value) {}
        void mostrar() const { 
            cout <<"Valor " << *d; 
        }
        virtual ~C2() {cout << "C2 destructor\n";}
};
int main(){
    /*
    class C1
    {
    private:
    std::shared_ptr<double> d;
    public:
    C1(std::shared_ptr<double> value) : d(value) {}
    virtual ~C1() { cout << "\nC1 destructor\n"; }
    void print() const { cout << "Valor " << *d; }
    };
	*/
	shared_ptr<double> val_compartido = make_shared<double>(2.5); 
	C1 c1(val_compartido);
    c1.mostrar();
	cout<<endl;
	C2 c2(val_compartido);
	c2.mostrar();
	cout<<endl;
	
	return 0;
}
