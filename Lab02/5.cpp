#include <iostream>

using namespace std;

int main(){

    int n;
    int may,men,sum=0;
    cout<<"Cantidad de numeros: ";cin>>n;
    int arreglo[n];
    for(int i=0;i<n;i++){
        cout<<"Numero "<<i<<" : ";cin>>arreglo[i];
    }
    may=arreglo[0];
    men=arreglo[0];
    for(int i=0;i<n;i++){
        
        if(arreglo[i]>=may){
            may=arreglo[i];
        }
        if(arreglo[i]<=men){
            men=arreglo[i];
        }
        sum+=i;
    }

    cout<<"\nEl mayor es: "<<may;
    cout<<"\nEl menor es: "<<men;
    cout<<"\nLa media es: "<<sum/2;
    



    return 0;
}