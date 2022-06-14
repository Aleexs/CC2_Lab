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

class Lista{
	Nodo *cabeza;
	public:
		
		Lista(){
			cabeza = NULL;
		}		
		void insertar_inic(int dato){
			Nodo *tempo = new Nodo();
			tempo->dato = dato;
			tempo->next = cabeza;
			cabeza = tempo;
		}		
		void insertar_fin(int dato){
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
		
		void insertar_entre(int dato, int pos){
			Nodo *tempo = new Nodo();
			tempo->dato = dato;
			if (pos == 0){
				tempo->next = cabeza;
				cabeza = tempo;
			}
			else{
				Nodo *ptr = cabeza;
				while(pos>1) {
					ptr = ptr->next;
					--pos;
				}
				tempo->next = ptr->next;
				ptr->next = tempo;
			}
		}
		
		void eliminar_inic(){
			if (cabeza == NULL){
				cout<<"Lista vacia"<<endl;
			}
			else{
				cout<<"Numero eliminado: "<<cabeza->dato<<endl;
				Nodo *tempo = cabeza;
				cabeza = cabeza->next;
				delete(tempo);
			}
		}
		
		void eliminar_fin(){
			if (cabeza == NULL){
				cout<<"Lista vacia"<<endl;
			}
			else if (cabeza->next == NULL){
				cout<<"Numero eliminado: "<<cabeza->dato<<endl;
				delete(cabeza);
				cabeza = NULL;
			}
			else{
				Nodo *tempo = cabeza;
				while (tempo->next->next != NULL) {
					tempo = tempo->next;
				}
				cout<<"Numero eliminado: "<<tempo->next->dato<<endl;
				delete(tempo->next);
				tempo->next = NULL;
			}					
		
		}
		
		void eliminar_pos(int pos){
			if (cabeza == NULL){
				cout<<"Lista vacia"<<endl;
			}
			else{
				Nodo *tempo, *ptr;
				if (pos == 0) {
					cout<<"Numero eliminado: "<<cabeza->dato<<endl;
					ptr = cabeza;
					cabeza = cabeza->next;
					delete(ptr);
				}
				else{
					tempo = ptr = cabeza;
					while(pos>0){
						--pos;
						tempo = ptr;
						ptr = ptr->next;
					}
					cout<<"Numero eliminado: "<<ptr->dato<<endl;
					tempo->next = ptr->next;
					free(ptr);
				}
			}
		
		}
		
		void imprimir(){
			if (cabeza == NULL){
				cout<<"Lista vacia"<<endl;
			}
			else{
				Nodo *tempo = cabeza;
				cout<<"Lista: ";
				while (tempo != NULL){
					cout<<tempo->dato<<" ";
					tempo = tempo->next;
				}
			}
		}	
			
};


int main() {
	
	int opc,pos;
	Lista list;
	do{
		cout<<"\n(1) Insertar al inicio";
		cout<<"\n(2) Insertar al final";
		cout<<"\n(3) Insertar entre dos valores";
		cout<<"\n(4) Eliminar elemento inicial";
		cout<<"\n(5) Eliminar elemento final";
		cout<<"\n(6) Eliminar elemento entre dos valores";
		cout<<"\n(7) Imprimir";
		cout<<"\n(8) Salir";
		cout<<"\nOpcion: ";
		cin>>opc;
		if(opc==1){
			int n;
            cout<<"Valor:  ";
			cin>>n;
			list.insertar_inic(n);
            }
		else if(opc==2){
			int n;
            cout<<"Valor:  ";
			cin>>n;
			list.insertar_fin(n);
				}
		else if(opc==3){
			int n;
            cout<<"Valor:  ";
			cin>>n;
			cout<<"Posicion: ";
			cin>>pos;
			list.insertar_entre(n,pos);
				}
		else if(opc==4){
			list.eliminar_inic();
			}
		else if(opc==5){
			list.eliminar_fin();
			}
		else if(opc==6){
			cout<<"Posicion: ";
			cin>>pos;
			list.eliminar_pos(pos);
			}
		else if(opc==7){
			list.imprimir();
			}				
		}while(opc != 8);
		
}
