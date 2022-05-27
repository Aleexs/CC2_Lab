#include <iostream>
using namespace std;
class ClaseMultimedia{
    protected: 
        int anioCreacion;
        string nombreAutor;
    public:
        ClaseMultimedia(int,string);
        ~ClaseMultimedia();
        void asignarAnio();
        void asignarAutor();
        
};
ClaseMultimedia::ClaseMultimedia(int _anioCreacion,string _nombreAutor){
    anioCreacion = _anioCreacion;
    nombreAutor = _nombreAutor;
}
ClaseMultimedia::~ClaseMultimedia(){} //destructor
void ClaseMultimedia::asignarAutor(){
    cout<<"Nombre de autor: "<<nombreAutor<<endl;
}
void ClaseMultimedia::asignarAnio(){
    cout<<"Anio de creacion: "<<anioCreacion<<endl;
}
class Disco : public ClaseMultimedia{
        string generoMusical;
    public:
        Disco(int,string,string);
        void mostrarDisco();
};
Disco::Disco(int anioCreacion,string nombreAutor,string _generoMusical):ClaseMultimedia(anioCreacion,nombreAutor){
    generoMusical = _generoMusical;
}
void Disco::mostrarDisco(){
    asignarAutor();
    asignarAnio();
    cout<<"Genero musical: "<<generoMusical<<endl;    
}
int main()
{
    Disco d1(2005,"Carlos Paez","Salsa");
    d1.mostrarDisco();
    return 0;
}