#ifndef LISTAS_H_INCLUDED
#define LISTAS_H_INCLUDED

struct nodoStruct;

typedef struct nodoStruct * No;

struct listaEncStruct;

typedef struct listaEncStruct * ListaEnc;

ListaEnc crearLista();

No crearNodo(int item, No prox);
//------------INCERTAR------------
int incertarInicio(ListaEnc lista,int item);
//-------------Eliminar lista-----------
int removerInicio(ListaEnc lista, int * item);


int estaVacia(ListaEnc);

int obtenerElemento(ListaEnc lista, int * item, int pos);
int obtenerTamanio(ListaEnc lista, int *tam);
void imprimir(ListaEnc lista);

void ordenarLista(ListaEnc lista);
int busquedaSecuencial(ListaEnc lista, int busco);
#endif // LISTAS_H_INCLUDED
