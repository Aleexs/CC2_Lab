//ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
using namespace std;

bool bisiesto(int n)
{
    if(n%4==0 || n%100==0 || n%400==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Escriba el anio a calcular : ";cin>>n;
    if(bisiesto(n)==true){
        cout<<"El anio "<<n<<" si es bisiesto";
    }
    else{
        cout<<"El anio "<<n<<" no es bisiesto";
    }
    return 0;
}