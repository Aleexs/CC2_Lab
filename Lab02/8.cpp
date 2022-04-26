//ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"Numero a multiplicar: ";cin>>n;
    cout<<"Hasta que numero desea generar la tabla : ";cin>>x;

    for(int i=0;i<=x;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl; 
    }
    return 0;
}