#include <iostream>
using namespace std;

class Windows{
    public:
        virtual ~Windows(){}
        virtual const char* getName()=0;
};

class BotonWindows : public Windows{
    public:
        ~BotonWindows(){}
        const char* getName(){
            return "\nDibujando Boton Windows";
        }
};

class CuadradoWindows : public Windows{
    public:
        ~CuadradoWindows(){}
        const char* getName(){
            return "\nDibujando Cuadrado Windows";
        }


};

class Mac{
    public:
        virtual ~Mac(){}
        virtual const char* getName()=0;

};

class BotonMac :public Mac{
    public:
        ~BotonMac(){}
        const char* getName(){
            return "\nDibujando Boton Mac";
        }
};

class CuadradoMac : public Mac{
    public:
        ~CuadradoMac(){}
        const char* getName(){

            return "\nDibujando Cuadrado Mac";
        }

};

class Linux{
    public:
        virtual ~Linux(){}
        virtual const char* getName()=0;
};

class BotonLinux : public Linux{
    public:
        ~BotonLinux(){}
        const char* getName(){
            return "\nDibujando Boton Linux";
        }

};

class CuadradoLinux : public Linux{
    public:
        ~CuadradoLinux(){}
        const char* getName(){
            return "\nDibujando Cuadrado Linux";
        }

};

class AbstractFactory{
    public:
        virtual ~AbstractFactory(){}
        virtual Windows *crearWindows() =0;
        virtual Mac *crearMac()=0;
        virtual Linux *crearLinux()=0;
};

class Botones : public AbstractFactory{
    public:
        ~Botones(){}
        Windows *crearWindows(){
            return new BotonWindows();
        }
        Mac *crearMac(){
            return new BotonMac();
        }

        Linux *crearLinux(){
            return new BotonLinux();
        } 
};

class Cuadrados : public AbstractFactory{
    public:
        ~Cuadrados(){}
        Windows *crearWindows(){
            return new CuadradoWindows();
        }
        Mac *crearMac (){
            return new CuadradoMac();
        }  
        Linux *crearLinux (){
            return new CuadradoLinux();
        }
};

int main(){
    Botones *_Botones = new Botones();
    Cuadrados *_Cuadrados = new Cuadrados();
   

    Windows *b1 =_Botones->crearWindows();
    cout<<"\nCliente: Windows "<<b1->getName()<<endl;
    Mac *b2=_Botones->crearMac();
    cout<<"\nCliente: Mac "<<b2->getName()<<endl;
    Linux *b3=_Botones->crearLinux();
    cout<<"\nCliente: Linux "<<b3->getName()<<endl;
    Windows *c1 =_Cuadrados->crearWindows();
    cout<<"\nCliente: Windows "<<c1->getName()<<endl;
    Mac *c2 =_Cuadrados->crearMac();
    cout<<"\nCliente : Mac "<<c2->getName()<<endl;
    Linux *c3 =_Cuadrados->crearLinux();
    cout<<"\nCliente : Linux "<<c3->getName()<<endl;
    

    delete b1;
    delete b2;
    delete b3;
    delete c1;
    delete c2;
    delete c3;
    delete _Botones;
    delete _Cuadrados;
    
    return 0;

}
//Albert Vargas Mamani