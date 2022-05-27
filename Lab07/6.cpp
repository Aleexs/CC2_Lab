#include <iostream>

using namespace std;

class Ave{
    protected:
        string tipoAve,colorPlumas;
    public:
        Ave(string,string);
        ~Ave();
        void mostrarAve();
};
Ave::Ave(string _tipoAve,string _colorPlumas){
    tipoAve = _tipoAve;
    colorPlumas = _colorPlumas;    
}
Ave::~Ave(){}

void Ave::mostrarAve(){
    cout<<"Un(a) "<<tipoAve<<" generalmente tiene las plumas de color: "<<colorPlumas<<endl;
}
class Ganso: public Ave{
    public:
        Ganso(string,string);
        void mostrar();
};
Ganso::Ganso(string _tipoAve,string _colorPlumas):Ave(_tipoAve,_colorPlumas){}
void Ganso::mostrar(){
    mostrarAve();
}
class Gallina: public Ave{
    public:
        Gallina(string,string);
        void mostrar();
};
Gallina::Gallina(string _tipoAve,string _colorPlumas):Ave(_tipoAve,_colorPlumas){}
void Gallina::mostrar(){
    mostrarAve();
}
class Pato: public Ave{
    public:
        Pato(string,string);
        void mostrar();
};
Pato::Pato(string _tipoAve,string _colorPlumas):Ave(_tipoAve,_colorPlumas){}
void Pato::mostrar(){
    mostrarAve();
}

int main()
{
   Ganso gan1("Ganso","Marron");
   Gallina gall1("Gallina","Blanco");
   Pato pat1("Pato","Amarillo");
   
   gan1.mostrar();
   gall1.mostrar();
   pat1.mostrar();
   return 0;
}