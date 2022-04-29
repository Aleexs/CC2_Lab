//ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
using namespace std;

void valorEntre()
{
    int x;
    cout<<"Valor comprendido entre 0 a 100 : ";cin>>x;
    while(x<0 || x>100){
        cout<<"Valor comprendido entre 0 a 100 : ";
        cin>>x;
    }
    cout<<"El valor introducido si esta comprendido entre 0 a 100";
}

void validarPar()
{
    int x;
    cout<<"Escribe un numero: ";cin>>x;
    if(x%2==0)
    {
        cout<<"El valor es par";
    }
    else{
        cout<<"El valor es impar";
    }
}

void sumImpares()
{
    int x,sum=0;
    cout<<"Sumar impares hasta el numero: ";cin>>x;
    for(int i=0;i<=x;i++)
    {
        if(i%2!=0){
            sum+=i;
        }
    
    }
    cout<<"La suma de impares es : "<<sum;
}
int main(){
    int opc;
    cout<<"(1) Introduce un valor entre 0 a 100 "<<endl;
    cout<<"(2) Validar un valor si es par"<<endl;
    cout<<"(3) Sumar los impares desde 0 a X"<<endl;
    cout<<"====> Opcion :";
    cin>>opc;
    
    while(opc<1 || opc>3)
    {
       cout<<"====> Opcion :";cin>>opc; 
    }
    if(opc==1){
        valorEntre();
    }
    else if(opc==2)
    {
        validarPar();
    }
    else{
        sumImpares();
    }
    return 0;
}