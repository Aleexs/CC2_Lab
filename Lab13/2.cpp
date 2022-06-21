#include <iostream>
#include <string.h>
using namespace std;

struct Persona{
    char nombre[50];
    char grupo[2];
    float nota[4];
};
typedef Persona persona;

int main(){
    int n,i=0;
    cout<<"Cantidad de estudiantes: ";cin>>n;
    persona p[n];
    while(i<n){
        fflush(stdin);
        cout<<"=================="<<endl;
        cout<<"Nombre: ";cin.getline(p[i].nombre,50);
        cout<<"Grupo: ";cin.getline(p[i].grupo,2);
        for(int j=0;j<4;j++){
            cout<<"Nota: ";cin>>p[i].nota[j];
        }
        cout<<endl;
        i++;
    }
    i=0;
    while(i<n){
        cout<<"\nPromedio final de: "<<p[i].nombre<<" de grupo "<<p[i].grupo<<endl;
        float prom;
        prom=(p[i].nota[0]*0.15)+p[i].nota[1]*0.2+p[i].nota[2]*0.25+p[i].nota[3]*0.4;
        cout<<"es : "<<prom;
        prom=0;
        i++;
    }
    return 0;
}