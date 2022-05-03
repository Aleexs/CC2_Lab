#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

void crear(double *&a,double *&b,int n){
    a = new double[n];
    b = new double[n];
}
void llenar(double *a,double *b, int n){
    cout<<"\n==<Llenando primer vector>==="<<endl;
    for(int i=0;i<n;i++){
        cout<<"Valor "<<i+1<<" : ";cin>>*(a+i);
    }
    cout<<"\n==<Llenando segundo vector>==="<<endl;
    for(int i=0;i<n;i++){
        cout<<"Valor "<<i+1<<" : ";cin>>*(b+i);
    }
}


void llenarAleatorio(double *a,double *b, int n){
    float x;
    
    srand(time(NULL));

    cout<<"\n==<Llenando primer vector>==="<<endl;
    for(int i=0;i<n;i++){
        x = 1+rand() %(100-1);
        x=x/10;
        *(a+i)=x;
        x=0;
    }
    cout<<"\nVector 1 lleno"<<endl;
    cout<<"\n==<Llenando segundo vector>==="<<endl;
    for(int i=0;i<n;i++){
        x = 1+rand() %(100-1);
        x=x/10;
        *(b+i)=x;
        x=0;
    }
    cout<<"\nVector 2 lleno"<<endl;
}
void mostrar(double *a,double *b,int n){
    cout<<"\nMostrando primer vector "<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<endl;
    }
    cout<<"\nMostrando segundo vector "<<endl;
    for(int i=0;i<n;i++){
        cout<<*(b+i)<<endl;
    }
}

void productoP(double *a, double *b,int n){
    cout<<"\n==<Mostrando producto punto de ambos vectores>==="<<endl;
    for(int i=0;i<n;i++){
        cout<<"\nValor en posicion "<<i<<" = "<<*(a+i)**(b+i);
    }
}

void productoM(double *a, double *b,int n){ // Funcion que muestra el valor en la posicion un millon-1 de vector A
// por el del vector B en la misma posición
    cout<<"\n==<Mostrando producto punto de ambos vectores>==="<<endl;
    
    cout<<"Vector 1: "<<*(a+n-1);
    cout<<"\nVector 2: "<<*(b+n-1);
    cout<<"\nValor en posicion "<<n-1<<" = "<<*(a+n-1)**(b+n-1);
}


void eliminar(double *&a,double *&b,int n){
    delete [] a;
    delete [] b;
}

int main(){
    double *a,*b;
    int n;
    cout<<"Cantidad de elementos: ";cin>>n;
    
    crear(a,b,n);
    llenarAleatorio(a,b,n);
    //mostrar(a,b,n);
    //productoP(a,b,n);
    productoM(a,b,n);

    eliminar(a,b,n);


    return 0;
}