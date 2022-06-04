#include <iostream>

using namespace std;

template <typename T>
T mayorNumero(T n1,T n2,T n3){
    T mayor;
    if(n1>=n2 && n2>=n3){
        mayor = n1;
    }
    else if(n2>=n1 && n1>=n3){
        mayor = n2;
    }
    else if(n3>=n1 && n1>=n2){
        mayor = n3;
    }
    else if(n3>=n2 && n2>=n1){
        mayor = n3;
    }
    else{
        mayor = n1;
    }
    return mayor;
}

int main(){
    int n1=4,n2=-8,n3=1;
    double a1=5.89,a2=-8.5,a3=7.23;
    cout<<"Mayor es: "<<mayorNumero(n1,n2,n3);
    cout<<"\nMayor es: "<<mayorNumero(a1,a2,a3);

    return 0;
}