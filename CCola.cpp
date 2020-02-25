#include <iostream>
#define tam 5
using namespace std;

class CCola{
public:
   int arreglo[tam];
   int frente;
   int fin;

public:
    CCola();
    void insertarElemento(int ele);
    int sacarElemento();
    int getFrente();
    int getFin();
    int colaLlena();
    int colaVasia();
    void mostarCola();
};
CCola::CCola(){
frente=0;
fin=0;
}
void CCola::insertarElemento(int ele){
if(colaLlena()==0){
    arreglo[fin]=ele;
    fin=fin+1;
}
else{
    cout<<"la cola esta llena"<<endl;
}

}
int CCola::sacarElemento(){
if(colaVasia()==0){
    frente=frente+1;
    return arreglo[frente-1];
}
else{
    cout<<"imposible sacar";
    return 0;
}
}
int CCola::getFrente(){
return arreglo[frente];
}
int CCola::getFin(){
return arreglo[frente];

}
int CCola::colaLlena(){
    if(frente==0 && (fin==tam)){
        return 1;

    }
    else{

        return 0;
    }

}
int CCola::colaVasia(){
if(frente==0&&fin==0 || (frente>fin)){
    return 1;

}
else{
    return 0;
}

}
void CCola::mostarCola(){
    cout<<"los elementos de cola son";
for(int i=frente;i<=fin;i++){

    cout<<arreglo[i]<<endl;

}

}
int main(){
    int op;
int e;
    CCola P1;

do{
    cout<<"\n\nMenu de la pila: \n";
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
            		P1.insertarElemento(e);
		     		break;
	     	   }

        case 2:{

        	        e= P1.sacarElemento();
        	        cout<<"Elemento eliminado:"<<e;
					break;
				}

        case 3:{
        	        cout<<"El elemento en el frente es:"<<P1.getFrente();
					break;
				}


        case 4:{
        	        cout<<"El elemento en el final es:"<<P1.getFin();
					break;
				}

        case 5:{

					cout<<"Los Elementos de la Cola son:"<<endl;
					P1.mostarCola();
					break;
		       }
            default:
                 cout<<"Las opciones son 1, 2, 3 , 4, 5.\n";
            break;
    }
}while(op != 6);
    return 0;






}















