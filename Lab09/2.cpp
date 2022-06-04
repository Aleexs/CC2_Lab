#include <iostream>
using namespace std;

template <typename T1, typename T2>
T2 suma(T1 n1,T2 n2){
    return n1+n2;
}
template <typename T1, typename T2>
T2 resta(T1 n1,T2 n2){
    return n1-n2;
}
template <typename T1, typename T2>
T2 producto(T1 n1,T2 n2){
    return n1*n2;
}
template <typename T1, typename T2>
T2 divide(T1 n1,T2 n2){
    return n1/n2;
}
int main(){
    int a=5;
    float b=2.65;
    cout<<"\nSuma: "<<suma(a,b);
    cout<<"\nResta: "<<resta(a,b);
    cout<<"\nProducto: "<<producto(a,b);
    cout<<"\nDivide: "<<divide(a,b);  
    return 0;
}