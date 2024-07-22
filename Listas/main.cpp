#include <iostream>
#include <cstring>
#include "listas.h"

using namespace std;

int main()
{
    cout << "--------CREAR LISTA--------" << endl;

    ListaEnc lista=crearLista();

    std::cout<<"\n ESTA VACIA: "<<estaVacia(lista);

    imprimir(lista);

    incertarInicio(lista,25);
    incertarInicio(lista,-12);
    incertarInicio(lista,58);
    incertarInicio(lista,32);
    incertarInicio(lista,80);
    incertarInicio(lista,3);
    imprimir(lista);

    ordenarLista(lista);
    ordenarLista(lista);
    imprimir(lista);

    //std::cout<<"Busco el 25--->Posicion: "<<busquedaSecuencial(lista,25);

    return 0;
}
