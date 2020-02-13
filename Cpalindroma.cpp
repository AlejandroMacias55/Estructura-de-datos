#include<iostream>
#include <string.h>
using namespace std;

class CPalindroma{
private:
char palabra[20];
int tope;
char aux[20];
public:
CPalindroma();
void ingresarPalabra(char p[20]);
void acomodarPalabra(char p[20]);
void mostrarPalabra();

};
CPalindroma::CPalindroma()
{
    tope=-1;
}

void CPalindroma::ingresarPalabra(char p[20]){
    strcpy(aux,p);
}
void CPalindroma::acomodarPalabra(){

for(int i=0;i<20;i++){
        for(int j=19;j>=0;j--){
            if(p[i]==aux[j]){
                cout<<"es palindroma "<<endl;
            }
            else
                cout<<"no es palindroma";
}
}
}
int main();
{
   char palabra[20];

cin>>palabra;
CPalindroma C1;

C1.ingresarPalabra(p);
C1.acomodar palabra()


    }






}
