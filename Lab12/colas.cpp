#include<iostream>
#include<vector>
using namespace std;

class Nodo{
	public:
		int dato;
		Nodo *next;
		Nodo(){
			next = NULL;
		}
};

class Cola{
	Nodo *cabeza;
	public:
		
		Cola(){
			cabeza = NULL;
		}		
		void push(int dato){
			Nodo *tempo = new Nodo();
			tempo->dato = dato;
			if (cabeza == NULL){
				cabeza = tempo;
			}
			else{
				Nodo *ptr = cabeza;
				while (ptr->next != NULL){
					ptr = ptr->next;
				}
				ptr->next = tempo;
			}
		}
		
		
		void pop(){
			if (cabeza == NULL){
				cout<<"Cola vacia"<<endl;
			}
			else{
				cout<<"Numero eliminado: "<<cabeza->dato<<endl;
				Nodo *tempo = cabeza;
				cabeza = cabeza->next;
				delete(tempo);
			}
		}
		
		void imprimir(){
			if (cabeza == NULL){
				cout<<"Cola vacia"<<endl;
			}
			else{
				Nodo *tempo = cabeza;
				cout<<"Cola: ";
				while (tempo != NULL){
					cout<<tempo->dato<<" ";
					tempo = tempo->next;
				}
			}
		}
        void buscar(){
		    Nodo *actual = new Nodo();
		    actual = cabeza;
		    int buscarV;
		    bool encontrar = false;
		    cout<<"Elemento a buscar: ";cin>>buscarV;
		    if(cabeza!=NULL){
			while(actual!=NULL && buscarV != true){
			    if(actual->dato == buscarV){
				cout<<"Elemento encontrado "<<buscarV;
				encontrar=true;
			    }
			    actual=actual->next;
			}
			if(encontrar ==false){
			    cout<<"Elemento no encontrado ";
			}
		    }
		    else{
			cout<<"Cola vacia";
		    }

		}
			
};


int main() {
	
	int opc,pos;
	Cola list;
	do{
		cout<<"\n(1) Insertar";		
		cout<<"\n(2) Eliminar";		
		cout<<"\n(3) Imprimir";
		cout<<"\n(4) Buscar";
        cout<<"\n(5) Salir ";
		cout<<"\nOpcion: ";
		cin>>opc;
		
		if(opc==1){
			int n;
            cout<<"Valor:  ";
			cin>>n;
			list.push(n);
				}
		
		else if(opc==2){
			list.pop();
			}
				
		else if(opc==3){
			list.imprimir();
			}
        else if(opc==4){
            list.buscar();
        }			
		}while(opc != 5);
		
    return 0;
}
