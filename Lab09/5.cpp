#include <iostream>
#include "4.h"
using namespace std;

template <typename T>
void mostrar(T arreglo){
    
    for(int i=0;i<5;i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
}
int main(int argc, char **argv){
    int a1[5]={3,7,1,-2,7};
    float f1[5]={3.6,7.2,1.67,-2.23,7.5};
    cout<<"\nEnteros: "<<endl;
    mostrar(a1);
    sortAsc(a1);
    mostrar(a1);
    sortDesc(a1);
    mostrar(a1);
    cout<<"\nFlotante: "<<endl;
    mostrar(f1);
    sortAsc(f1);
    mostrar(f1);
    sortDesc(f1);
    mostrar(f1);
    


    return 0;
}