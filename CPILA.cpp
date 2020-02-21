#include <iostream>
#define tam 3
using namespace std;

class CPila{
 private:
     int arreglo [tam];
     int tope;

 public:
     CPila();
     void insertarElemento(int ele);
     int esPilaVacia();
     int sacarElemento();
     int esPilaLlena();
     int getTope();
     void mostrarPila();
};
     CPila::CPila(){
         tope = - 1;
     };
     void CPila::insertarElemento(int ele){
        if(esPilaLlena()==1)
           cout<<"Imposible insertar"<<endl;
        else
        {
            tope=tope+1;
            arreglo[tope]=ele;
        };
     }
     int CPila::esPilaVacia(){
         if (tope==-1){
            cout<<"PILA VACIA"<<endl;
            return 1;
         }
         else
            return 0;
     }
    int CPila::sacarElemento(){
       if (esPilaVacia()==0){
            tope = tope-1;
            return arreglo[tope+1];
       }
       else
        {
           cout<<"Imposible sacar"<<endl;
           return 0;
       }
     }
     int CPila::esPilaLlena(){
         if (tope == tam-1){
            cout<<"Pila Llena";
            return 1;
         }
         else
            return 0;
     }
     int CPila::getTope(){
         return arreglo[tope];
     }
     void CPila::mostrarPila(){
      int i;
      for (i=0;i<=tope;i++){
        cout<<arreglo[i]<<endl;
      }
      /*para que sea vea como pila
      for (i=tope;i>=0;i--){
        cout<<arreglo[i]<<endl;
      }*/

     }

int main()
{
    CPila P1;
    int op=0;
    int e;

do{
    cout<<"\n\nMenu de la pila: \n";
    cout<<"1) Insertar elemento a la pila \n";
    cout<<"2) Sacar elemento de pila \n";
    cout<<"3) Obtener Elemento en tope de la pila\n";
    cout<<"4) Mostrar pila\n";
    cout<<"5) Salir\n";
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
        	        cout<<"El elemento en el Tope es:"<<P1.getTope();
					break;
				}


        case 4:{

					cout<<"Los Elementos de la Pila son:"<<endl;
					P1.mostrarPila();
					break;
		       }
            default:
                 cout<<"Las opciones son 1, 2, 3 y 4.\n";
            break;
    }
}while(op != 5);
    return 0;
}
