//ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
using namespace std;

void potencia(int a,int b)
{
    int resultado=0,x=1;
    while(x<b)
    {
        if(resultado<a){
            resultado=a*a;
        }
        else{
            resultado*=a;
        }
        x++;
    }
    cout<<a<<" elevado a "<<b<<" es: "<<resultado;
}

int main(){
    int a,b;
    cout<<"Elevar un numero "<<endl;
    cout<<"Numero que sera elevado : ";cin>>a;
    cout<<"Cantidad de veces que se elevara : ";cin>>b;

    potencia(a,b);
}