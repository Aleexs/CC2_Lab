#include <iostream>
#include <string>
using namespace std;

void mostrarAlta(int *codigo,string *nombre,float *precio,int *stock){
    cout<<"\n\t === Productos con stock disponible ==="<<endl;
    for(int i=0;i<10;i++){
        if(stock[i]>0){
            cout<<codigo[i]<<" | "<<nombre[i]<<" | s/"<<precio[i]<<" | Cantidad : "<<stock[i];
            cout<<endl;
        }          
    }
}
// (int codigo[],string nombre[],float precio[],int stock[])
void mostrarBaja(int *codigo,string *nombre,float *precio,int *stock){
    cout<<"\n\t === Productos sin stock ==="<<endl;
    for(int i=0;i<10;i++){
        if(stock[i]==0){
            cout<<codigo[i]<<" | "<<nombre[i]<<" | s/"<<precio[i]<<" | Cantidad : "<<stock[i];
            cout<<endl;
        }          
    }
}

void darAlta(int *codigo,string *nombre,float *precio,int *stock){
    int cod;
    int temp,*temp2;
    temp2=&temp;
    cout<<"Productos sin stock..."<<endl;
    mostrarBaja(codigo,nombre,precio,stock);
    cout<<"Codigo de producto: ";cin>>cod;
    for(int i=0;i<10;i++){
        if(cod==codigo[i]){
            if(stock[i]==0){
                cout<<"Ingrese cantidad a agregar: ";cin>>temp;
                *(stock+i)=*temp2;
            }
            else{
                cout<<"El producto ya cuenta con productos disponibles, intente con otro";
            }
        } 
    }
}

void darBaja(int *codigo,string *nombre,float *precio,int *stock){
    int cod,opc;
    cout<<"\nNecesita comprar productos con stock disponible, elija por favor "<<endl;
    mostrarAlta(codigo,nombre,precio,stock);
    cout<<"\nElija el codigo del producto disponible: ";cin>>cod;
    for(int i=0;i<10;i++){
        if(cod==codigo[i] && stock[i]>0){
            cout<<"\nProducto comprado"<<endl;
            cout<<"Seguir comprando? (1) Si: ";cin>>opc;
            stock[i]--;
            while(stock[i]>0 &&opc==1){
                cout<<"Seguir comprando? (1)Si / (2) No: ";cin>>opc;
                stock[i]--;
            }
        }
                
    }    
}

void buscarProducto(int *codigo,string *nombre,float *precio,int *stock){
    int tempOpc,cod;
    string nomTemporal;
    cout<<"\nProducto a buscar (1)Nombre / (2) Codigo: ";cin>>tempOpc;
    if(tempOpc==1){
        fflush(stdin);
        cout<<"Nombre de producto : ";getline(cin,nomTemporal);
        
        for(int i=0;i<10;i++){
            if(nomTemporal==nombre[i]){
                cout<<"El producto ha sido encontrado: "<<endl;
                cout<<codigo[i]<<" "<<nombre[i]<<" S/"<<precio[i]<<" | Cantidad: "<<stock[i];
            }
        }
    }
    else if(tempOpc==2){
        cout<<"Codigo de producto: ";cin>>cod;
        for(int i=0;i<10;i++){
            if(cod==codigo[i]){
                cout<<"El producto ha sido encontrado: "<<endl;
                cout<<codigo[i]<<" "<<nombre[i]<<" S/"<<precio[i]<<" | Cantidad: "<<stock[i];
            }
        }
    }
    cout<<endl;

}

void modificarProducto(int *codigo,string *nombre,float *precio,int *stock){
    int cod,opcTempo;
    string n1,*ptr_n1;
    float p1,*ptr_p1;
    int stock1,*ptr_stock1;
    ptr_n1=&n1;
    ptr_p1=&p1;
    ptr_stock1=&stock1;
    
    cout<<"\nCodigo de producto: ";cin>>cod;
    for(int i=0;i<10;i++){
        if(cod==codigo[i]){
            cout<<"\nModificando producto..."<<endl;
            cout<<"(1) Nombre (2) Precio (3) Cantidad: ";cin>>opcTempo;
            if(opcTempo==1){
                fflush(stdin);
                cout<<"Nuevo nombre: ";getline(cin,n1);
                *(nombre+i)=*ptr_n1;
            }
            else if(opcTempo==2){
                cout<<"Nuevo precio: ";cin>>p1;
                *(precio+i)=*ptr_p1;               
                
            }
            else if(opcTempo==3){
                cout<<"Nuevo stock (agrega más productos): ";cin>>stock1;
                *(stock+i)+=*ptr_stock1;
            }
        }
    }


}



int main(){

    int codigo[]={101,102,103,104,105,106,107,108,109,110};
    string nombre[]={"Vaqueros","Pitillos","Jeans Anchos","Camisas","Poleras","Zapatos","Zapatillas","Shorts","Medias","Gorros"};
    float precio[]={234.4,454.2,23.4,232.5,2123.5,123,76.2,2,12,5};
    int stock[10]={0};
    int opc; // (codigo,nombre,precio,stock);
    mostrarAlta(&codigo[0],&nombre[0],&precio[0],&stock[0]); //mmuestra lista con stock de 1 a +;
    mostrarBaja(&codigo[0],&nombre[0],&precio[0],&stock[0]); // muestra lista sin stock, 0 productos
    cout<<"\n(1) Mostrar listado || (2) Dar de alta || (3) Dar de baja || (4) Buscar || (5) Modificar ";
    fflush(stdin);
    cout<<"\nOpcion: ";cin>>opc;

    while(opc>=1 && opc<=5){
        if(opc==1){
            cout<<"Mostrar listado actual: "<<endl;
            mostrarAlta(&codigo[0],&nombre[0],&precio[0],&stock[0]); 
            mostrarBaja(&codigo[0],&nombre[0],&precio[0],&stock[0]); 
        }
        if(opc==2){
            cout<<"\n\tAgregando productos... "<<endl;
            darAlta(&codigo[0],&nombre[0],&precio[0],&stock[0]);
            //system("cls");

        }
        else if(opc==3){
            darBaja(&codigo[0],&nombre[0],&precio[0],&stock[0]);
            //system("cls");
            
        }
        else if(opc==4){
            buscarProducto(&codigo[0],&nombre[0],&precio[0],&stock[0]);            
        }
        else if(opc==5){
            modificarProducto(&codigo[0],&nombre[0],&precio[0],&stock[0]);
            //system("cls");     
        }
        cout<<"(1) Mostrar listado || (2) Dar de alta || (3) Dar de baja || (4) Buscar || (5) Modificar ";
        cout<<"\nOpcion: ";cin>>opc;
    }

    //mostrarAlta(&codigo[0],&nombre[0],&precio[0],&stock[0]); verificar si cambió sin que se llame a las funciones que modifican
   // mostrarBaja(&codigo[0],&nombre[0],&precio[0],&stock[0]);

    return 0;
}