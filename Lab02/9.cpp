//ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Tamanio del rectangulo: ";cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}