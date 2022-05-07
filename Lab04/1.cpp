#include <iostream>
#include <stdlib.h>
#include <string.h>   
using namespace std;

int main(){

    string nombre[3];
    string apellidos[3];
    int edad[3],dni[3];
    cout<<"\n>===RELLENANDO DATOS===<"<<endl;
    for(int i=0;i<3;i++){
        cout<<"\nPersona "<<i+1<<" : "<<endl;;
        cout<<"Nombre: ";getline(cin,nombre[i]);
        cout<<"Apellido: ";getline(cin,apellidos[i]);
        cout<<"Edad : ";cin>>edad[i];
        cout<<"Dni: ";cin>>dni[i];
        fflush(stdin);
    }
    
    cout<<"\n>===MOSTRANDO DATOS===<"<<endl;
    for(int i=0;i<3;i++){
        cout<<"\nPersona "<<i+1<<" : ";
        cout<<"\nNombre: "<<nombre[i];
        cout<<"\nApellido: "<<apellidos[i];
        cout<<"\nEdad : "<<edad[i];
        cout<<"\nDni: "<<dni[i];
        cout<<endl;
    }
    return 0;
}