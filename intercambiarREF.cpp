#include<iostream>

using namespace std;

void intercambiar(int *a, int *b)
{
int aux;
aux=*a;
*a=*b;
*b=aux;

}

int main()
{
    int a1,b1;
    cout<<"Ingrese 2 valores"<<endl<<"1- ";
    cin>>a1;
    cout<<endl<<"2- ";
    cin>>b1;
    cout<<"valor de A;"<<a1<<endl<<"valor de B;"<<b1<<endl;
    intercambiar(&a1,&b1);
    cout<<"Valores despues de Itercambio"<<endl;
    cout<<"valor de A;"<<a1<<endl<<"valor de B;"<<b1<<endl;
    return 0;
}
