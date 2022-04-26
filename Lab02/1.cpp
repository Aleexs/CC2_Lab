//ESCARZA PACORI ALEXANDER RAUL
#include <iostream>
using namespace std;
int main(){
    int sum=0;
    for(int i=2;i<=100;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    cout<<"La suma es: "<<sum;
    return 0;
}