#include <iostream>
#include <stdlib.h>
using namespace std;

class Nodo{
    public:
        int dato;
        Nodo *next;

        Nodo(){
            this->dato = 0;
            this->next = NULL;
        }
};

class Lista{
    public:
        Nodo *end; 
        int tam;
        Lista(){
            this->tam = 0;
            this->end = NULL;
        }

        void Push(int n){
            Nodo *nuevo = new Nodo();
            nuevo->dato = n;
            nuevo->next = this->end;
            this->end = nuevo;
            cout<<n<<" "<<endl;
            this->tam++;
        }



        void Print(){
            Nodo *aux = this->end;
            while(aux!=NULL){
                cout<<aux->dato<<" ";
                aux = aux->next;
            }
        }
};


int main(){

    int opc;
    Lista s = Lista();
    do{
        cout<<"\n(1) Insertar final "<<endl;
        cout<<"(2) Imprimir "<<endl;
        cout<<"(3) Salir "<<endl;
        cout<<"Opcion : ";cin>>opc;

        if(opc==1){
            int n;
            cout<<"Numero a ingresar : ";
            cin>>n;
            s.Push(n);

        }

        else if(opc==2){
            cout<<"Lista: "<<endl;
            s.Print();
        }
    }while(opc!=3);


    return 0;
}