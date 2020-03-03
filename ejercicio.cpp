#include<iostream>
#include<string.h>
using namespace std;

int contarVocales(char *cad){
    int cont=0;
    while(*cad){
switch(*cad){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
   cont=cont+1;


}
*cad++;
    }
return cont;


}

int main()
{
char cadena[80];

cout<<"programa para contar Vocales en una cadena"<<endl;
cout<<"Ingrese la cadena: ";
cin.getline(cadena,80);
cout<<"la cadena tiene "<<contarVocales(cadena)<<" vocales";
return 0;


}
