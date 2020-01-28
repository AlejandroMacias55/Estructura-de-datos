#include <iostream>
#include <string.h>
#define tam 3
//JAVIER ALEJANDRO MACIAS BASURTO
 struct corredor{
char nombre[25];
int edad;
char sexo;
char categoria[20];
};

using namespace std;

int main()
{
    struct corredor C[tam];
    for(int i=0;i<tam;i++){
        cout<<"Dame el nombre\n";
        cin>>C[i].nombre;
        cout<<"Dame la edad\n";
        cin>>C[i].edad;
        cout<<"dame el sexo:(F-femenino, M-masculino)\n";
        cin>>C[i].sexo;
        //si edad <25=juvenil
        //si edad <40=juvenil
        //si no cae en estas dos pues es veterano
        if (C[i].edad<=25){
            strcpy(C[i].categoria,"Juvenil");
        }
        else if(C[i].edad<=40){
           strcpy(C[i].categoria, "Senior");
        }
        else
            strcpy(C[i].categoria, "Veterano");

    }
    //Mostrar datos de corredores por categoria
    cout<<"\nCorredores categoria Juvenil\n";
    for(int i=0;i<tam;i++){
        if(strcmp(C[i].categoria,"Juvenil")==0)
            cout<<"\nNombre: "<<C[i].nombre<<" Edad: "<<C[i].edad;
    }

    cout<<"\n\nCorredores categoria Senior\n";
    for(int i=0;i<tam;i++){
        if(strcmp(C[i].categoria,"Senior")==0)
            cout<<"\nNombre: "<<C[i].nombre<<" Edad: "<<C[i].edad;
    }

    cout<<"\n\nCorredores categoria Veterano\n";
    for(int i=0;i<tam;i++){
        if(strcmp(C[i].categoria,"Veterano")==0)
            cout<<"\nNombre: "<<C[i].nombre<<" Edad: "<<C[i].edad;
    }

return 0;
}



