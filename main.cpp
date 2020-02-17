#include <iostream>
#define tam
using namespace std;
class CExpresiones
{
    private:
    int a=0,b=0;
    char op;
    int tope;
    public:
        CExpresiones();
        void convertirPre(char op,int a,int b);
        void convertirPost(char op,int a, int b);

};
CExpresiones::CExpresiones(){
    tope= -1;

}

void CExpresiones::convertirPre(char op,int a,int b){
        if(op==43||op==42||op==45||op==47)//igual a suma, multipliccion, resta, divicion
        {
            cout<<op<<","<<a<<","<<b<<endl;
        }
  else
  {
      cout<<"operacion no valida";

  }

        }

void CExpresiones::convertirPost(char op,int a,int b){
    if(op==43||op==42||op==45||op==47)//igual a suma, multipliccion, resta, divicion
        {
            cout<<a<<","<<b<<","<<op<<endl;
        }
  else
  {
      cout<<"operacion no valida";

  }

}

int main()
{
    int a1, b1,r=0;
    char op1;


    cout<<"ingrese un numero"<<endl;
    cin>>a1;
    cout<<"ingrese una operacion"<<endl;
    cin>>op1;
    cout<<"ingrese un numero"<<endl;
    cin>>b1;
    CExpresiones C1;

    do{
     cout<<"//QUE QUIERES HACER?///"<<endl<<"1-----Prefija"<<endl<<"2----Postfija"<<endl<<"3----Salir"<<endl;
     cin>>r;

switch (r){
          case 1:{
              C1.convertirPre(op1,a1,b1);
                  break;
                  };

            case 2:{


                      C1.convertirPost(op1,a1,b1);
                  break;
                  };





}
    }while (r!=3);
    cout<<"bye bye";
return 0;
}
