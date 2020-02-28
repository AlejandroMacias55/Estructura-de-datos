#include<iostream>
#include<string.h>
#define tam 3

using namespace std;

class CColaCircular{
public:
    int arreglo[tam];
    int frente;
    int fin;
public:
    CColaCircular();
    void insertarElemento(int ele);
    int sacarElemento();
    int getFrente();
    int getFin();
    int esColaVacia();
    int esColaLlena();
    void mostrarElementos();
};

CColaCircular::CColaCircular(){
frente=0;
fin=-1;
}

void CColaCircular::insertarElemento(int ele){
if (esColaLlena()==0){
        if (fin==-1) //condicion que verifica si se inserta el primer elemento
        fin=0;
    arreglo[fin]=ele;
    fin=fin+1;
    if(fin==tam) //operamos enlace circular
        fin=0;
    }
 else{
    cout<<"Imposible insertar"<<endl;
    }
}

int CColaCircular::sacarElemento(){
    int aux;
if (esColaVacia()==0){
    aux=arreglo[frente];
    if (frente==fin){ //si se saca el ultimo elemento
    frente=0;
    fin=-1;
    }
    frente=frente+1;
    if(frente==tam) //generamos enlace de cola circular
        frente=0;
    return aux;
    }

else {
    cout<<"Imposible sacar"<<endl;
    return 0;
    }
}

int CColaCircular::getFrente(){
    if(esColaVacia()==0){
        return arreglo[frente];
    }
    else{
   cout<<"Cola Vacia"<<endl;
    }
}

int CColaCircular::getFin(){
    if(esColaVacia()==0){
        if (fin==0) //verificar mostrar enlace
    {
        return arreglo[tam-1];
    }
    else{
        return arreglo[fin-1];
    }
    }
    else{
    cout<<"Cola Vacia"<<endl;
    }
}

int CColaCircular::esColaVacia(){
if((frente==0)&&(fin==-1)){
    return 1;
}
else {
    return 0;
    }
}

int CColaCircular::esColaLlena(){
if (frente==fin){
    return 1;
}
else{
    return 0;
    }
}

void CColaCircular::mostrarElementos(){
    int i;
    if(esColaVacia()==1){
            cout<<"No hay elementos"<<endl;
    }
    else{
    if (frente<fin){
    cout<<"\nLos elementos en la cola son:"<<endl;
    for(i=frente;i<fin;i++){
    cout<<arreglo[i]<<endl;
            }
        }
        else{
                //imprimir con enlace circular
            for(i=frente;i<tam;i++){
                cout<<arreglo[i]<<endl;
            }
            for(i=0;i<fin;i++){
                cout<<arreglo[i]<<endl;
            }
        }
    }
}

int main(){
CColaCircular C1;
int op=0;
int e;

do{
    cout<<"\nMenu de la Cola: \n";
    cout<<"1) Insertar elemento a la cola \n";
    cout<<"2) Sacar elemento de cola \n";
    cout<<"3) Obtener Elemento en frente de la cola\n";
    cout<<"4) Obtener Elemento en final de la cola\n";
    cout<<"5) Mostrar cola\n";
    cout<<"6) Salir\n";
    cout<<"Que deseas hacer? ";
    cin>>op;
    switch (op) {
        case 1:{
        	        cout<<"Que elemento deseas insertar? ";
        	        cin>> e;
            		C1.insertarElemento(e);
		     		break;
	     	   }
        case 2:{
        	        e= C1.sacarElemento();
        	        cout<<"\nElemento eliminado:"<<e;
					break;
				}
        case 3:{
        	        cout<<"\nEl elemento en el frente es:"<<C1.getFrente();
					break;
				}
        case 4:{
        	        cout<<"\nEl elemento en el final es:"<<C1.getFin();
					break;
				}
        case 5:{
					C1.mostrarElementos();
					break;
		       }
            default:
                 cout<<"Las opciones son 1, 2, 3 ,4 y 5.\n";
            break;
    }
}while(op != 6);
    return 0;
}
