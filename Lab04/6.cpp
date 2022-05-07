#include <iostream>
using namespace std;

void rellenarArreglo(int arreglo[3][3])
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Numero en posicion ["<<i<<"]["<<j<<"]: ";cin>>arreglo[i][j];
        }
    }
}
void sumaFilas(int arreglo[3][3])
{
    int sumF[3],aux=0,may,indice;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            aux+=arreglo[i][j];
        }
        sumF[i]=aux;
        aux=0;
    }
    may=sumF[0];
    for(int i=0;i<3;i++){
        if(sumF[i]>=may){
            may=sumF[i];
            indice=i;
        }
    }
    // cout<<sumF[0]<<endl;cout<<sumF[1]<<endl;cout<<sumF[2]<<endl;
    cout<<"El numero de fila es "<<indice;
    cout<<"\nLa suma mayor es: "<<may;
}
int main(){
    int arreglo[3][3];
    rellenarArreglo(arreglo);
    sumaFilas(arreglo);


    return 0;
}