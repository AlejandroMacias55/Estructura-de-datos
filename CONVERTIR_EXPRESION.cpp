#include<bits/stdc++.h>
bool es_operador(char carac);//DECLARO UNA FUNCION PARA VER SI ES OPERADOR O NO
using namespace std;
class Stack
{
private:
    char *arreglo;//LO AGO POR REFERENCIA
    int tope;
    int tam;
public:
    Stack(int n);
    char pop();
    void push(char carac);
    bool isEmpty();
    bool isFull();
    ~Stack();
};
Stack::Stack(int n)
{
    arreglo=new char[n];//DECLARO UNA NUEVA PILA
    tope=-1;
    tam=n;//INICIALIZO TAM EN LA DIMENSION DEL ARREGLO
}
char Stack::pop()
{
    if(!isEmpty())
    {
        return arreglo[tope--];
    }
    return '\0';
}
void Stack::push(char carac)
{
    if(!isFull())
    {
        arreglo[++tope]=carac;
    }
    else
    {
        cout<<"\t\t\tLA PILA ESTA LLENA"<<endl;
    }
}
bool Stack::isEmpty()
{
    return tope<0;
}
bool Stack::isFull()
{
    return tope>=tam;
}
Stack::~Stack()//DESTRUCTOR LIBERA LA MEMORIA DEL ARREGLO
{
    if(arreglo!=NULL) delete arreglo;
}
int main()
{
    string expresion;//DECLARAMOS LA CADENA  DONDE ESCANEAREMOS LA EXPRESION
    cout<<"\t\t\tINGRESA LA EXPRESION QUE DESEAS TRANSFORMAR"<<endl;
    cin>>expresion;
    int n=expresion.size();
    //CREO DOS PILAS UNA SERA PARA GUARDAR MIS OPERADORES Y OTRA PARA MIS NUMEROS O LETRAS
    Stack  operadores(n);
    Stack resultado(n);
    int op;
    do
    {
        cout<<"\n\n\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t|    INGRESA LA OPCION QUE DESEA REALIZAR     |"<<endl;
        cout<<"\t\t\t|    1.-MOSTRAR LA EXPRESION INFIJA           |"<<endl;
        cout<<"\t\t\t|    2.-MOSTRAR LA EXPRESION PREFIJA          |"<<endl;
        cout<<"\t\t\t|    3.-MOSTRAR LA EXPRESION SUFIJA           |"<<endl;
        cout<<"\t\t\t|    4.-SALIR                                 |"<<endl;
        cout<<"\t\t\t----------------------------------------------\n\n"<<endl;
        cin>>op;
        switch(op)
        {
        case 1:

                //INFIJA
                cout<<" TU EXPRESION INFIJA ES "<<endl;
                for(int x=0;x<n;x++)
                {
                    cout<<expresion[x]<<" ";
                }
                break;

        case 2:
            {
                //PREFIJA
                for(int x=n-1;x>=0;x--)
                {
                    if(es_operador(expresion[x]))//ES OPERADOR //NOS SERVIRA PARA IR VACIANDO LA PILA AL ARREGLO QUE VAMOS A IMPRIMIR
                    {
                        operadores.push(expresion[x]);//SI SE CUMPLE GUARDALO EN LA PILA OPERADORES
                        if(expresion[x]=='(')
                        {
                            char item=operadores.pop();//SI HAY PARENTESIS LOS ELIMINAMOS
                            do//INICIO UN CICLO MIENTRAS LEE LO QUE ESTA DENTRO DESDE QUE ENCUENTRA UN PARENTESIS ABIERTO HASTA QUE CIERRE
                            {
                                item=operadores.pop();
                                if(item=='\0'||item==')')//COMPARO SI HAY VALOR NULO/ESPACIO O PARENTESIS CERRADO
                                {
                                    break;//SI SE COMPLE SIGUE
                                }
                                else
                                {
                                    resultado.push(item);//SI NO GUARDALO EN LA PILA QUE SE HIZO PARA EL RESULTADO
                                }
                            }while(true);//HAS ESTO MISTRAS SEA VEDADERO
                        }
                    }
                    else//SI NO ES CARACTER EN TONCES ES NUMERO O LETRA
                    {
                        resultado.push(expresion[x]);//GUARDALO EN EL ARREGLO QUE ES PARA EL RESULTADO
                    }
                }
                //MISTRAS QUE LA PILA DE OPERADORES SIGA LLENA LA VAMOS A IR VACIANDO AL RESULTADO
                do
                {
                    char item=operadores.pop();
                    if(item=='\0')
                    {
                        break;
                    }
                    else
                    {
                        resultado.push(item);
                    }
                }while(true);
                //MOSTRAMOS EL RESULTADO
                cout<<"\n\nLA EXPRESION PREFIJA ES\n"<<endl;
                for(int x=0;x<n;x++)
                {
                    char item=resultado.pop();
                    cout<<item<<" ";
                }
                cout<<endl;
                break;
            }
        case 3:
            {
                //sufija
                for (int x = 0; x<n; x++)
                {
                    if(es_operador(expresion[x]))
                    {
                        operadores.push(expresion[x]);
                        if(expresion[x] == ')')
                        {
                            char item = operadores.pop();
                            do
                            {
                                item = operadores.pop();
                                if(item == '\0' || item == '(')
                                {
                                    break;
                                }
                                else
                                {
                                    resultado.push(item);
                                }
                            } while(true);
                        }
                    }
                    else
                    {
                        resultado.push(expresion[x]);
                    }
                }
                do
                {
                    char item = operadores.pop();
                    if(item == '\0')
                    {
                        break;
                    }
                    else
                    {
                        resultado.push(item);
                    }
                } while(true);
                //PARA LA POSFIJA SOLO OBTENEMOS EL REULTADO DE LA PREFIJA Y LA GUARDAMOS EN UNA VARIABLE AXUILIAR
                string res="";
                //RECUPERAMOS LOS DATOS
                for(int x=0;x<n;x++)
                {
                    res+=resultado.pop();
                }
                //INVERTIMOS LOS DATOS OBTENIDOS
                cout << "\n\nLA EXPRESION EXPRESION POSFIJA ES" << endl;
                for (int x=n-1;x>=0;x--)
                {
                    cout << res[x]<< " ";
                }
                cout << endl;
            }

        }
    }while(op!=4);
    cout<<"\t\t\t GRACIAS POR TU CONSULTA ;)"<<endl;
}
bool es_operador(char carac)
{
    bool respuesta=false;
    if(carac==')'||carac=='('||carac=='*'||carac=='+'||carac=='-'||carac=='/')
    {
        respuesta=true;
    }
    return respuesta;
}
