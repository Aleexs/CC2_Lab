#include <iostream>
using namespace std;

struct Jugador{
    char nombre[30];
    int edad;
    float talla;
};
typedef Jugador jugador;

int main(){
    int cont=1;;
    jugador j1[10];
    for(int j=0;j<10;j++){
        fflush(stdin);
        cout<<"========================"<<endl;
        cout<<"Nombre: ";cin.getline(j1[j].nombre,30);
        cout<<"Edad: ";cin>>j1[j].edad;
        cout<<"Talla: ";cin>>j1[j].talla;
    }

    for(int i=0;i<10;i++){
        if(j1[i].edad<20 && j1[i].talla>1.70){
            cout<<"\nDatos de jugador "<<cont<<endl;
            cout<<j1[i].nombre<<endl;
            cout<<j1[i].edad<<endl;
            cout<<j1[i].talla<<endl;
        }
    }


    return 0;
}