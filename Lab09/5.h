#include <iostream>
using namespace std;

template <typename T>
void sortDesc(T arreglo[5]){
    T aux;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arreglo[i]<=arreglo[j]){
                aux=arreglo[i];
                arreglo[i]=arreglo[j];
                arreglo[j]=aux;
            }        
        }
    }
}
template <typename T>
void sortAsc(T arreglo[5]){
    T aux;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arreglo[i]>=arreglo[j]){
                aux=arreglo[i];
                arreglo[i]=arreglo[j];
                arreglo[j]=aux;
            }        
        }
    }
}



