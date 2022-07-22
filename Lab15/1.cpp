#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Carro {
    public:
        std::vector<std::string> componentes;
        std::vector<std::string> color;
 
    void ListaComp()const{ 
        //std::cout<<"\tCompra de piezas para automovil "<<endl;
        std::cout<<"\t========================"<<endl;
        std::cout << "\tCOMPONENTES || \tCOLOR"<<endl;
        std::cout<<"\t========================";
        for (size_t i = 0; i < componentes.size(); i++){
            if (componentes[i] == componentes.back() && color[i] == color.back()) { 
                std::cout<<"\n"<<componentes[i]<<"\t\t"<<color[i]<<endl;
            } 
            else{ 
                 std::cout<<"\n"<<componentes[i]<<"\t"<<color[i];
            } 
        }
    } 
};


class IBuilder {
public:
    virtual ~IBuilder() {}
    virtual void ProducirLlantas() const = 0;
    virtual void ProducirPuertas() const = 0;
    virtual void ProducirTimon() const = 0;
    virtual void ProducirAsientos() const = 0;
    virtual void ProducirCarroceria() const = 0;
};



class BuilderEspecifico : public IBuilder{
    private:
        Carro* _car;
    public:
        BuilderEspecifico() {
            this->Reset(); 
        }  
        ~BuilderEspecifico(){ 
            delete _car;
        } 
  
        void Reset(){
            this->_car = new Carro();
        } 
  
        void ProducirLlantas()const override{
            this->_car->componentes.push_back("\tLlantas ");
            string color_llanta;
            fflush(stdin);
            cout<<"Color de llantas: ";getline(cin,color_llanta);        
            this->_car->color.push_back(color_llanta);                  
        }        
  
        void ProducirPuertas()const override{ 
            this->_car->componentes.push_back("\tPuertas");
            string color_puertas;
            fflush(stdin);
            cout<<"Color de puertas: ";getline(cin,color_puertas);        
            this->_car->color.push_back(color_puertas); 
        } 
  
        void ProducirTimon()const override {
            this->_car->componentes.push_back("\tTimon");
            string color_timon;
            fflush(stdin);
            cout<<"Color de timon: ";getline(cin,color_timon);        
            this->_car->color.push_back(color_timon);
        }

        void ProducirAsientos()const override {
            this->_car->componentes.push_back("\tAsientos");
            string color_asientos;
            fflush(stdin);
            cout<<"Color de asientos: ";getline(cin,color_asientos);        
            this->_car->color.push_back(color_asientos);
        }

        void ProducirCarroceria()const override {
            this->_car->componentes.push_back("\tCarroceria");
            string color_carroceria;
            fflush(stdin);
            cout<<"Color de carroceria: ";getline(cin,color_carroceria);        
            this->_car->color.push_back(color_carroceria);
        }

        Carro* GetCarro() {
        Carro* resultado = this->_car;
        this->Reset();
        return resultado;
        }
}; 



class Director {
    private:
        IBuilder* builder;
    public:
        void set_builder(IBuilder* builder) { 
            this->builder = builder;
        }
        void Build_CarroBasico() { 
            this->builder->ProducirLlantas();
            this->builder->ProducirPuertas();
        } 
  
        void Build_CarroCompleto() { 
            this->builder->ProducirLlantas();
            this->builder->ProducirPuertas();
            this->builder->ProducirTimon();
            this->builder->ProducirAsientos();
            this->builder->ProducirCarroceria();
        }

        void Build_CarroTarifario(){
            this->builder->ProducirLlantas();
            this->builder->ProducirPuertas();
            this->builder->ProducirTimon();
        }
        void Build_CarroRegular(){
            this->builder->ProducirTimon();
            this->builder->ProducirAsientos();
            this->builder->ProducirPuertas();
        }
}; 


void ClienteCode(Director& director){
    int opc;
    BuilderEspecifico* builder = new BuilderEspecifico();
    director.set_builder(builder);
    std::cout<<"Elija el tipo de carro a producir...";
    std::cout<<"\n(1) Basico: Llantas,Puertas";
    std::cout<<"\n(2) Completo: Llantas,Puertas,Timon,Asientos,Carroceria";
    std::cout<<"\n(3) Tarifario: Llantas,Puertas,Timon";
    std::cout<<"\n(4) Regular: Timon,Asientos,Puertas";
    std::cout<<"\nElija una opcion: ";std::cin>>opc;
    Carro* p = builder->GetCarro();
    if(opc==1){
        std::cout << "\tCARRO BASICO:\n";
        director.Build_CarroBasico();
        //Carro* p = builder->GetCarro();
        p = builder->GetCarro();
        p->ListaComp();
        delete p;
    }
    else if(opc==2){
        std::cout << "\tCARRO COMPLETO:\n";
        director.Build_CarroCompleto();
        p = builder->GetCarro();
        p->ListaComp();
        delete p;
    }
    else if(opc==3){
        std::cout << "\tCARRO TARIFARIO:\n";
        director.Build_CarroTarifario();
        p = builder->GetCarro();
        p->ListaComp();
        delete p;
    }
    else if(opc==4){
        std::cout << "\tCARRO REGULAR:\n";
        director.Build_CarroRegular();
        p = builder->GetCarro();
        p->ListaComp();
        delete p;
    }   

    
    delete builder; 
} 



int main(){
     
    Director* director = new Director();    
    ClienteCode(*director);    
    delete director;


    return 0;
}