#include <iostream>
using namespace std;

class Persona{
    protected: 
        int edad;
        string nombre;
    public:
        Persona(int,string);
        ~Persona();
        void asignarNombre();
        void asignarEdad();
        
};
Persona::Persona(int _edad,string _nombre){
    edad = _edad;
    nombre = _nombre;
}
Persona::~Persona(){}
void Persona::asignarNombre(){
    cout<<"Su nombre es: "<<nombre<<endl;
}
void Persona::asignarEdad(){
    cout<<"Su edad es: "<<edad<<endl;
}
class Alumno : public Persona{
    public:
        Alumno(int,string);
        void mostrarAlumno();
};
Alumno::Alumno(int _edad,string _nombre):Persona(_edad,_nombre){}

void Alumno::mostrarAlumno(){
    asignarNombre();
    asignarEdad();
}

int main()
{
    Alumno a1(18,"Luis");
    a1.mostrarAlumno();

    return 0;
}