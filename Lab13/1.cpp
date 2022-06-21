#include <iostream>
using namespace std;

struct companiero{
    int dia;
    int mes;
    char nombre[20];
};
typedef companiero Companiero;

int main(){
    int n,mesActual;
    cout<<"Cantidad de estudiantes: ";cin>>n;
    cout<<"Mes actual (numero):";cin>>mesActual;
    Companiero cantidad[n];
    for(int i=0;i<n;i++){
        cout<<"=================================";
        fflush(stdin);
        cout<<"\nNombre : ";cin.getline(cantidad[i].nombre,20);
        cout<<"Dia : ";cin>>cantidad[i].dia;
        cout<<"Mes : ";cin>>cantidad[i].mes;
        
    }
    cout<<"\nPersonas que cumplen anios este mes "<<mesActual<<endl;
    for(int i=0;i<n;i++){
        
        if(cantidad[i].mes==mesActual){
            cout<<"\nNombre : "<<cantidad[i].nombre;
            cout<<"\nDia : "<<cantidad[i].dia;
            cout<<"\n=======================";
        }
        
    }
    

    return 0;
}