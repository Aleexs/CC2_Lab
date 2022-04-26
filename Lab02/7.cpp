//ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
using namespace std;
int main(){
    int x;
    float a,sum=0;
    cout<<"Cantidad de estudiantes: ";cin>>x;
    
    for(int i=0;i<x;i++){
        cout<<"\n <== Estudiante "<<i+1<<" ==> "<<endl;
        for(int j=0;j<3;j++){
            cout<<"Nota "<<j+1<<": ";cin>>a;
            sum+=a;
        }
        cout<<"Promedio de Estudiante "<<i+1<<" : "<<sum/3;
        sum=0;
    }
    return 0;
}