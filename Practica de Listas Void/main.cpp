#include <iostream>
#include <cstring>
#include "listaVoid.h"
#include "../Persona/persona.h"
#include "../DispositivosTec/dispositivo.h"


using namespace std;

int main()
{
    //ListaVoid lista = crearLista(sizeof(int));
    ListaVoid listaPersona=crearLista(sizeof(Persona));
    Persona p=crearPersona("Matias","Fernandez",37458321,1993,6,3,"Celular","Samsung","Core2",10000,"8gb");
    insertarInicio(listaPersona,&p);
    p=crearPersona("Agustina","Rodriguez",34685412,1988,9,27,"Tablet","Xiaomi","Carpertier",60000,"1TB");
    insertar(listaPersona,&p,1);
    p=crearPersona("Jesica","Gomez",33765965,1987,7,23,"Pc Escritorio","Intel","Pentium4",21000,"128gb");
    insertarInicio(listaPersona,&p);
    mostrarLista(listaPersona);
   /* int x;

    //x=9;
    //insertarInicio(lista,&x);
    x=8;
    insertarInicio(lista,&x);
    x=7;
    insertarInicio(lista,&x);
    x=6;
    insertarInicio(lista,&x);
    x=5;
    insertarInicio(lista,&x);
    x=4;
    insertarInicio(lista,&x);
    x=3;
    insertarInicio(lista,&x);
    x=2;
    insertarInicio(lista,&x);
    x=0;
    insertarInicio(lista,&x);
    x=1;
    insertar(lista,&x,1);
    x=9;
    insertarFinal(lista,&x);

    mostrarLista(lista);

    cout<<"\n\nEliminando la posicion 4: "<<endl;

    int elemento;
    removerFinal(lista,&elemento);
    x=100;
    insertarFinal(lista,&x);
    mostrarLista(lista);

    cout<<"\n\nEL elemento es:"<<elemento<<endl;

    liberarLista(lista);*/
    liberarLista(listaPersona);

    return 0;
}
