#include <iostream>
#include <stdlib.h>
#include <string.h>
#define MAX 20
using namespace std;
class CPalindroma
{
private:
    char dato[MAX];
    int tope;
public:
    CPalindroma();

    void ingresarPalabra(char pa[20]);
    void imprimirDatos();
    int compararPalabra(char p[20]);
};
CPalindroma::CPalindroma()
{
    tope=-1;
}

void CPalindroma::ingresarPalabra(char pa[20])
{
        tope=strlen(pa);//numero de caracteres de la palabra
        strcpy(dato,pa);

}
void CPalindroma::imprimirDatos()
{
    cout<<"la palabra alrevez es: ";
        for (int i=tope;i>=0;i--)
        {
            cout<<dato[i];
        }
        cout<<endl;

}
int CPalindroma::compararPalabra(char p[20])
{
    tope=strlen(p);//NOS DEVUELVE EL NUMERO DE CARACTERES
    for (int i=0;i<tope;i++)
    {

        if (dato[tope-1-i]!=p[i])
        {
           cout<<"No es palindroma "<<endl;
                cout<<dato[tope-1-i]<<"--no es igual--"<<p[i]<<endl;
           return 0;
        }
    }
    cout<<"La palabra es palindroma"<<endl;
    return 0;
}
int main()
{
    CPalindroma C1;
    char palabra[20];
    cout << "//INGRESE LA PALABRA//"<< endl;
    cin>>palabra;
    C1.ingresarPalabra(palabra);
    C1.imprimirDatos();
    C1.compararPalabra(palabra);
    return 0;
}
