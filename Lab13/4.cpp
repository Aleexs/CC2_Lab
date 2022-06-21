#include <iostream>
using namespace std;

struct Empleado{
    char nombre[30];
    char sexo[15];
    float sueldo;
};
typedef Empleado empleado;

int main(){
    int n;
    float may,men;
    cout<<"Cantidad de empleados: ";cin>>n;
    empleado e1[n];
    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"====== Empleado"<<i+1<<" ======"<<endl;
        cout<<"Nombre: ";cin.getline(e1[i].nombre,30);
        cout<<"Sexo: ";cin.getline(e1[i].sexo,15);
        cout<<"Sueldo: ";cin>>e1[i].sueldo;
    }
    may=e1[0].sueldo;
    men=e1[0].sueldo;

    for(int i=1;i<n;i++){
        if(e1[i].sueldo>=may){
            may=e1[i].sueldo;
        }
        if(e1[i].sueldo<=men){
            men=e1[i].sueldo;
        }
    }

    for(int i=0;i<n;i++){
        if(e1[i].sueldo==may){
            cout<<"\nEl mayor sueldo corresponde a: "<<endl;
            cout<<e1[i].nombre<<"con $"<<e1[i].sueldo;
        }
        if(e1[i].sueldo==men){
            cout<<"\nEl menor sueldo corresponde a: "<<endl;
            cout<<e1[i].nombre<<"con $"<<e1[i].sueldo;
        }
    }

    return 0;
}