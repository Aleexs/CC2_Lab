#include <iostream>
using namespace std;

class Color{
    protected:
        string colores; 
    public:
        Color(string);
        ~Color();
        void tipoColor();
};
//Red,green,blue
Color::Color(string _colores){
    colores = _colores;
}
Color::~Color(){}
void Color::tipoColor(){
    string tipo;
    if(colores =="r"){
        tipo = "rojo";
    }
    else if(colores =="g"){
        tipo = "verde";
    }
    else if(colores == "b"){
        tipo = "azul";
    }
    cout<<" es de color "<<tipo<<endl;
}

class Material{
    protected:
        string material;
    public:
        Material(string);
        ~Material();
        void tipoMaterial();
};
Material::Material(string _material){
    material = _material;
}
Material::~Material(){}

void Material::tipoMaterial(){
    cout<<"El material es: "<<material;
}

class Objeto : public Color, public Material{
    public:
        Objeto(string,string);
        ~Objeto();
        void mostrarObjeto();
};

Objeto::Objeto(string _colores,string _material):Color(_colores),Material(_material){
}
Objeto::~Objeto(){}

void Objeto::mostrarObjeto(){
    tipoMaterial();
    tipoColor();
}
int main()
{
    Objeto o1("r","Madera");
    Objeto o2("g","Plastico");

    o1.mostrarObjeto();
    o2.mostrarObjeto();

    return 0;
}