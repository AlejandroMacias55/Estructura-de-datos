#include <iostream>
#include <string.h>

using namespace std;

class CEvento{
private:
    char nombre[25], lugar [25], fecha[25];
    int hora;
public:
    CEvento();
void Cambiar_nombre(char nom[25]);
void Cambiar_fecha(char fec[25]);
void Cambiar_hora(int hor);
void Cambiar_lugar(char lug[25]);
void Mostrar_datos();

};
CEvento::CEvento(){

strcpy(nombre," ");
strcpy(lugar," ");
strcpy(fecha," ");
hora=0;


}
void CEvento::Cambiar_nombre(char nom[25]){
strcpy(nombre,nom);
}

void CEvento::Cambiar_fecha(char fec[25]){
strcpy(fecha,fec);
}

void CEvento::Cambiar_hora(int hor){
hora=hor;

}
void CEvento::Cambiar_lugar(char lug[25]){

strcpy(lugar,lug);
}

void CEvento::Mostrar_datos()
{
    cout<<"////INFORMACION DEL EVENTO/////"<<endl;
    cout<<"///Nombre------"<<nombre<<endl;
    cout<<"///Lugar------"<<lugar<<endl;
    cout<<"///Hora-------"<<hora<<"h.r"<<endl;
    cout<<"///fecha------"<<fecha<<endl;
}


int main()
{
    char n[25], l[25], f[25];
    int h;
   CEvento C1;

   C1.Mostrar_datos();
   cout<<"Ingrese el nombre del evento"<<endl;
   cin>>n;
   cout<<"Ingrese el lugar"<<endl;
   cin>>l;
   cout<<"Ingrese la hora (formato 24hr)"<<endl;
   cin>>h;
   if(h>24)
   {
       cout<<"formato incorrecto";
       return 0;
   }
   cout<<"Ingrese la fecha"<<endl;
   cin>>f;

   C1.Cambiar_nombre(n);
   C1.Cambiar_lugar(l);
   C1.Cambiar_fecha(f);
   C1.Cambiar_hora(h);
   C1.Mostrar_datos();


    return 0;
}
