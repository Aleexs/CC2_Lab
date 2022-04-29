
#include <iostream>
using namespace std;

void listaPrimos(int x,int lista[100])
{
    int veces=0;
    int cont=0;
    for(int i=2;i<x;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(i%j==0)
            {
                cont++;
            }
        }
        if(cont==2){
            lista[veces]=i;
            veces++;
        }
        cont=0;
    }

    for(int i=0;i<veces;i++)
    {
        cout<<lista[i]<<" ";
    }
}

int main(){
    int x,lista[100];
    cout<<"Limite a detectar numeros primos : ";cin>>x;
    listaPrimos(x,lista);



    return 0;
}