#include<iostream>
#include<string.h>
#define tam 3
using namespace std;

class CPila{
private:
int arreglo[tam];
int tope;

public:
    CPila();
    void insertarElemento(int ele);
    int esPilaVacia();
    int SacarElemento();
    int esPilaLlena();
    int getTope();
    void mostrarPila();

};
    CPila::CPila(){
    tope=-1;
    }
    void CPila::insertarElemento(int ele){
    if(esPilaLlena()==1){
        cout<<"///ERROR////-La pila esta llena";
    }
    else{
    tope=tope+1;
    arreglo[tope]=ele;
    }
    }


    int CPila::esPilaVacia(){
    if(tope==-1){
        cout<<"la pila esta vacia"<<endl;
        return 1;//es para que el metodo regrese 1 ya que es int
    }
    else
        return 0;

    }


    int CPila::SacarElemento(){
    if(esPilaVacia()==0){
        tope=tope-1;
        return arreglo[tope+1];
    }
    else
        cout<<"///ERROR-No se puede sacar"<<endl;
        return 0;
    }
    int CPila::esPilaLlena(){
    if(tope==tam-1){
        cout<<"Pila Llena"<<endl;
        return 1;
    }
    else
        return 0;
    }
    int CPila::getTope(){
    return arreglo[tope];
    }
    void CPila::mostrarPila(){
    for(int i=0;i>=tope;i++){

      cout<<"El elemento "<<i<<" es; "<<arreglo[i]<<endl;
    }

    }

    int main()
    {





    }
