#include <iostream>
using namespace std;
void buscar(int arreglo[8],int n)
{    
    for(int i=0;i<8;i++){
        if(n==arreglo[i]){
            cout<<"\nVerdadero";
        }
        else{
            cout<<"\nFalso";
        }
    }   
}
int main(){
    int arreglo[8]={5,34,8,23,98,3,787,1};
    int n;
    cout<<"Numero a buscar: ";cin>>n;
    buscar(arreglo,n);
    return 0;
}