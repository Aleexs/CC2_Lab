
#include <iostream>
using namespace std; 

void suma(int a,int b)
{
    cout<<a+b;
}
void resta(int a,int b)
{
     cout<< a-b;
}
void producto(int a,int b)
{
     cout<<a*b;
}
void divide(int a,int b)
{
    if(a>=b)
    	 cout<< a/b;
    else{
        cout<< b/a;
    }        
}

int main()
{
    int (*arreglo[4]) (int,int) = {};
    int x,y;
    int opc;
    cout<<"Valor de X: ";cin>>x;
    cout<<"Valor de Y: ";cin>>y;     
    cout<<"(1)Suma |(2) Resta | (3) Multiplicar | (4) Dividir | (5) Salir \n";
    cout<<"Opcion a elegir: ";cin>>opc;
    if(opc==1){
        suma(x,y);
    }
    else if(opc==2){
        resta(x,y);
    }
    else if(opc==3){
        producto(x,y);
    }
    else if(opc==4){
        divide(x,y);
    }
    else if(opc==5){
        cout<<"Adios";
    }
    else{
        cout<<"Valor incorrecto";
    }

    
    
 
    return 0;
}
