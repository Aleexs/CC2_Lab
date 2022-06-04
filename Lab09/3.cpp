#include <iostream>
#include <string.h>
using namespace std;

template <typename T1,typename T2>
void correo(T1 caracter,T2 cadena){
       
    for(int i=0;i<5;i++){
        cout<<caracter<<cadena[i]<<"@unsa.edu.pe"<<endl;
    }
}


int main(){
    char a1[] = "a";
    string s1[5]={"perez","dominguez","sanchez","paredes","pinto"};
    correo(a1,s1);

    return 0;
}