#include <iostream>
using namespace std;

int main(){
    int x,y,swap;
    int *a,*b,*c;
    cout<<"Numero 1: ";cin>>x;
    cout<<"Numero 2: ";cin>>y;
    swap=x;
    a=&x;
    b=&y;
    c=&swap;
    
    c=a;
    a=b; 
    b=c; 
    cout<<"\nNumero 1: "<<*a;
    cout<<"\nNumero 2: "<<*b;
    
    return 0;
}