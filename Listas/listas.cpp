#include <iostream>
#include <cstring>
#include "listas.h"


struct nodoStruct{
    int item;
    No prox;
};

struct listaEncStruct{
    int tam;
    No inicio;
};

ListaEnc crearLista(){
    ListaEnc lista = new listaEncStruct;
    lista->tam=0;
    lista->inicio=NULL;

    return lista;
};

No crearNodo(int item, No prox){
    No no = new nodoStruct;
    no->item=item;
    no->prox=prox;

    return no;
};
int incertarInicio(ListaEnc lista, int item){
    No nuevoNo = crearNodo(item,lista->inicio);

    lista->inicio = nuevoNo;
    lista->tam++;

    return true;

};
int removerInicio(ListaEnc lista, int * item){

    if(estaVacia(lista)){
        return -1;
    }

    No aux=lista->inicio;

    //Parametro que paso por referencia
    *item = aux->item;

    free(aux);
    aux=NULL;

    lista->tam--;
    return 1;
};

int estaVacia(ListaEnc lista){

    //Verificar algunas cosas¿?
    if(lista->inicio==NULL){
        return true;
    }
    return false;
};

int obtenerElemento(ListaEnc lista, int * item, int pos){

    if(estaVacia(lista)){
        return -1;
    }
    if (pos<0||pos>lista->tam){
        *item =-1;
        return -1;
    }
    if(item==NULL){
        return -1;
    }

    No aux;
    aux = lista->inicio;

    for(int i=0;i<pos;i++){
        aux=aux->prox;
    }

    *item=aux->item;

    return 1;
};
int obtenerTamanio(ListaEnc lista, int * tam){

    if(lista==NULL){
        return -1;
    }
    if(tam==NULL){
        return -1;
    }
    *tam= lista->tam;

    return 1;
};
void imprimir(ListaEnc lista){

    int cantidad;

    obtenerTamanio(lista,&cantidad);

    std::cout<<"\n[";
    for(int i=0;i<cantidad;i++){
        int cadaElemento;
        obtenerElemento(lista,&cadaElemento,i);
        std::cout<<cadaElemento<<" ";
    }
    std::cout<<"]\n";
};

void ordenarLista(ListaEnc lista){
    int tam;
    obtenerTamanio(lista,&tam);

    int auxItem;

    No actual;

    for(int i=0;i<tam;i++){

        actual=lista->inicio;

        for(int j=0;j<tam-1;j++){
            if(actual->item > actual->prox->item){

                auxItem=actual->item;
                actual->item=actual->prox->item;
                actual->prox->item=auxItem;
            }
        }
    }

};

int busquedaSecuencial(ListaEnc lista, int busco){
    int encontrado=-1;//No encontrado

    int tam;
    obtenerTamanio(lista,&tam);

    No actual=lista->inicio;

    for(int i=0;i<tam;i++){
        if(actual->item == busco){
            encontrado=i;
            i=tam;
        }

        actual=actual->prox;
    }

    return encontrado;
};
/*int busquedaBinaria(ListaEnc lista, int busco){
 int tam,puntoMedio;
 float m;
 obtenerTamanio(lista,&tam);

 No actual = lista->inicio;

 m=(1+tam)/2;
 m=(int)puntoMedio;


}*/



