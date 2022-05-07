#include <iostream>
using namespace std;

void rellenarMatriz(int matriz[5][3])
{
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<"Numero ["<<i<<"]["<<j<<"] : ";cin>>matriz[i][j];
        }
    }
}
void mostrarMatriz(int matriz[5][3])
{
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
}
void sumaFilasPares(int matriz[5][3])
{
    int cont=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<3;j++){
            if((i+1)%2==0){
                cont+=matriz[i][j];
            }
        }
    }
    cout<<"\n"<<cont;
}

int main(){
    int matriz[5][3];
    rellenarMatriz(matriz);
    mostrarMatriz(matriz);
    sumaFilasPares(matriz);


    return 0;
}