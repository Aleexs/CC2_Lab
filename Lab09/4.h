#include <iostream>
using namespace std;

template <typename T>
void mayor(T arreglo[5]){
    T elMay = arreglo[0];
    for(int i=0;i<5;i++){
        if(arreglo[i]>=elMay){
            elMay = arreglo[i];
        }
    }
    cout<<"El mayor elemento es : "<<elMay<<endl;
}

template <typename T>
void menor(T arreglo[5]){
    T elMen = arreglo[0];
    for(int i=0;i<5;i++){
        if(arreglo[i]<=elMen){
            elMen = arreglo[i];
        }
    }
    cout<<"El menor elemento es: "<<elMen<<endl;
}