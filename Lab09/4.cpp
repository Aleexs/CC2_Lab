#include <iostream>
#include "4.h"
using namespace std;

template <typename T>
void mostrar(T arreglo[5]){
    cout<<"\nArreglo: "<<endl;
    for(int i=0;i<5;i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
}


int main(int argc, char **argv){
    int ArrayEntero [5] = {10,7,2, 8, 6}; 
    float ArrayFloat [5] = {12.1, 8.7, 5.6, 8.4, 1.2};
    mostrar(ArrayEntero);
    mayor(ArrayEntero);
    menor(ArrayEntero);
    mostrar(ArrayFloat);
    mayor(ArrayFloat);
    menor(ArrayFloat);



    return 0;
}