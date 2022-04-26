//ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    string palabra;
    cout<<"Escriba una palabra: ";cin>>palabra;
    n=palabra.size();
    //cout<<"tam: "<<n;

    for(int i=n-1;i>=0;i--){
        cout<<palabra[i]<<endl;
    }
    return 0;
}