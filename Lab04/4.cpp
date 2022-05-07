#include <iostream>
using namespace std;
int numerosPrimos() // FUNCION SIMILAR A LA SIGUIENTE

{
    int cont=0,cant=0;
    for(int i=2;i<101;i++)
    {
        for(int j=i;j>0;j--){
            if(i%j==0){
                cont++;
            }
        }
        if(cont==2){
            cant++;
        }
        cont=0;
    }
    return cant;
}

void arregloPrimos(int arreglo[], int n)
{
    int cont=0,indice=0;
    for(int i=2;i<101;i++)
    {
        for(int j=i;j>0;j--){
            if(i%j==0){
                cont++;
            }
        }
        if(cont==2){
            arreglo[indice]=i;
            indice++;
        }
        cont=0;
    }
    
    cout<<"Arreglo de primos entre 1 al 100 son: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arreglo[i]<<" ";
    }
}
int main(){
    int n;
    n=numerosPrimos();
    int arreglo[n];
    arregloPrimos(arreglo,n);



    return 0;
}