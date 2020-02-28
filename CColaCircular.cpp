#include<iostream>
#define tam 3

using namespace std;

class CCola
{
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
        int esColaVacia();
        int esColaLlena();
        void mostrarElementos();

};

        CCola::CCola(){
          frente=0;
          fin=-1;
        }
        void CCola::insertarElemento(int ele){
           if (esColaLlena()== 0)
           {
               if(fin==-1){
                    fin=0;
            arreglo[fin]=ele;
            fin=fin+1;
           }

           if(fin==tam){
            fin=0;
           }
           }
           else
           {
               cout<<"Imposible insertar"<<endl;
           }
        };
        int CCola::sacarElemento(){
            int aux;
           if (esColaVacia()==0)
           {
aux=arreglo[frente];
              if(frente==fin){

                frente=0;
                fin=-1;
              }
 frente=frente+1;
              if(frente==tam){
                frente=0;

                return aux;
              }
           }
           else
           {
             cout<<"Imposible sacar"<<endl;
             return 0;
           }
        }
        int CCola::getFrente(){
            if(esColaVacia()==0){
                return arreglo[frente];
            }
            else{
                cout<<"no hay elementos"<<endl;
            }


        }

int CCola::getFin(){

if(esColaVacia()==0){
        if(fin==0)
        {
            return arreglo[tam-1];
        }
        else{
            return arreglo[fin-1];
        }

}
else{
    cout<<"no hay elementos"<<endl;
}

}
        int CCola::esColaVacia(){

           if ((frente == fin) && (fin==-1))
              {
                  return 1;
              }
           else{

                return 0;
           }

        }
        int CCola::esColaLlena(){
         if (frente==fin)
            {
                  return 1;
              }
           else{

                return 0;
           }
        }
        void CCola::mostrarElementos(){
if(esColaVacia()==1){
    cout<<"no hay elementos"<<endl;

}
else{
    if(frente<fin){
        for(int i=frente;i<fin;i++){
            cout<<arreglo[i]<<endl;
        }
    }
    else{
            //imprimimos el enlace circular
        for(int i=frente;i<tam;i++){
            cout<<arreglo[i]<<endl;
        }
         for(int i=0;i<fin;i++){
            cout<<arreglo[i]<<endl;
        }
    }
}

        }


int main()
{

 CCola C1;
    int op=0;
    int e;

do{
    cout<<"\n\nMenu de la cola \n";
    cout<<"1) Insertar elemento  \n";
    cout<<"2) Sacar elemento  \n";
    cout<<"3) Obtener elemento frente\n";
    cout<<"4) Obtener elemento final\n";
    cout<<"5) Mostrar elementos\n";
    cout<<"6) Salir\n";
    cout<<"Opción a elegir: ";
    cin>>op;
    switch (op) {
        case 1:{
        	        cout<<"\nQue elemento deseas insertar? ";
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
         case 6:{

					cout<<"\nAdios"<<endl;;
					break;
		       }
            default:
                 cout<<"\nLas opciones son 1, 2, 3,  4 y 5.\n";
            break;
    }
}while(op != 6);
    return 0;
}
