#include <iostream>
#include <string>
using namespace std;

class Llanta{
    public:
        int tamanio;
};
class Motor{
    public:
        int poder;
};

class Carcasa{
    public:
        string forma;
};

class Timon{

    public:
        string color;
};

class Vidrios{
    public:
        string aspecto;
};

class Asientos{
    public:
        string cantidad;
};

class Carro{

    public:
        Llanta* _llanta[4];
        Motor* _motor;
        Carcasa* _carcasa;
        Timon* _timon;
        Vidrios* _vidrios;
        Asientos* _asientos[4];

        void caracteristicas(){
            cout<<"Carcasa: "<<_carcasa->forma<<endl;
            cout<<"Caballos de Fuerza del Motor: "<<_motor->poder<<endl;
            cout<<"Timon: "<<_timon->color<<endl;
            cout<<"Vidrios: "<<_vidrios->aspecto<<endl;
            cout<<"Asientos: "<<_asientos[0]->cantidad<<" "<<endl;
            cout<<"Tamaño de Llantas: "<<_llanta[0]->tamanio<<" \n"<<endl;

        }
};

class BuilderCarro{
    public:
        virtual Llanta* getLlanta()=0;
        virtual Motor* getMotor()=0;
        virtual Carcasa* getCarcasa()=0;
        virtual Timon* getTimon()=0;
        virtual Vidrios* getVidrios()=0;
        virtual Asientos* getAsientos()=0;
};

class DirectorCarro{
    BuilderCarro* builder;
    public:
        void setBuilder(BuilderCarro* newBuilder){
            builder=newBuilder;
        }
        Carro* getCarro(){
            Carro* carro=new Carro();

            carro->_carcasa=builder->getCarcasa();
            carro->_motor=builder->getMotor();
            carro->_timon=builder->getTimon();
            carro->_vidrios=builder->getVidrios();
            carro->_asientos[0]=builder->getAsientos();
            carro->_asientos[1]=builder->getAsientos();
            carro->_asientos[2]=builder->getAsientos();
            carro->_asientos[3]=builder->getAsientos();
            carro->_llanta[0]=builder->getLlanta();
            carro->_llanta[1]=builder->getLlanta();
            carro->_llanta[2]=builder->getLlanta();
            carro->_llanta[3]=builder->getLlanta();

            return carro;
        }

};

class FerrariBuilder : public BuilderCarro{
    
    public: 
        Llanta* getLlanta(){
            Llanta* llanta=new Llanta();
            llanta->tamanio=36;
            return llanta;

        }

        Motor* getMotor(){
            Motor* motor= new Motor();
            motor->poder = 500;
            return motor;
        }

        Carcasa* getCarcasa(){
            Carcasa* carcasa= new Carcasa();
            carcasa->forma= "Deportivo";
            
        }
        Timon* getTimon(){
            Timon* timon = new Timon();
            timon ->color= "Rojo";
        }
        Vidrios* getVidrios(){
            Vidrios* vidrios= new Vidrios();
            vidrios ->aspecto="Polarizados";
        }
        Asientos* getAsientos(){
            Asientos* asientos= new Asientos();
            asientos ->cantidad="Medianos";
        }

};

class JeepHiluxBuilder : public BuilderCarro{

    public:
        Llanta* getLlanta(){
            Llanta* llanta=new Llanta();
            llanta->tamanio=45;
            return llanta;

        }

        Motor* getMotor(){
            Motor* motor= new Motor();
            motor->poder = 650;
            return motor;
        }

        Carcasa* getCarcasa(){
            Carcasa* carcasa= new Carcasa();
            carcasa->forma= "Camioneta4X4";
            
        }
        Timon* getTimon(){
            Timon* timon = new Timon();
            timon ->color= "Negro";
        }
        Vidrios* getVidrios(){
            Vidrios* vidrios= new Vidrios();
            vidrios ->aspecto="Polarizados";
        }
        Asientos* getAsientos(){
            Asientos* asientos= new Asientos();
            asientos ->cantidad="Grandes";
        }
};

class AudiBuilder: public BuilderCarro{

    public:
            Llanta* getLlanta(){
            Llanta* llanta=new Llanta();
            llanta->tamanio=34;
            return llanta;

        }

        Motor* getMotor(){
            Motor* motor= new Motor();
            motor->poder = 460;
            return motor;
        }

        Carcasa* getCarcasa(){
            Carcasa* carcasa= new Carcasa();
            carcasa->forma= "Elegantes";
            
        }
        Timon* getTimon(){
            Timon* timon = new Timon();
            timon ->color= "Plomo";
        }
        Vidrios* getVidrios(){
            Vidrios* vidrios= new Vidrios();
            vidrios ->aspecto="Polarizados";
        }
        Asientos* getAsientos(){
            Asientos* asientos= new Asientos();
            asientos ->cantidad="Pequenios";
        }
};

int main(){
    Carro* carro;
    DirectorCarro director;

    FerrariBuilder deportivoferrari;
    JeepHiluxBuilder camionetaHilux;
    AudiBuilder carroAudi;

    //Construyendo el Ferrari
    cout<<"Ferrari "<<endl;
    director.setBuilder(&deportivoferrari);
    carro = director.getCarro();
    carro->caracteristicas();
    //Construyendo la Camioneta
    cout<<"Hilux"<<endl;
    director.setBuilder(&camionetaHilux);
    carro = director.getCarro();
    carro->caracteristicas();
    //Construtendo el Audi

    cout<<"Audi"<<endl;
    director.setBuilder(&carroAudi);
    carro = director.getCarro();
    carro->caracteristicas();

    return 0;
}
//Albert Vargas Mamani
