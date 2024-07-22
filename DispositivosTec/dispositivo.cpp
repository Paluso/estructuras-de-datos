#include <iostream>
#include <cstring>
#include "dispositivo.h"


struct dispositivoStruct{

    char tipo[20];
    char marca[20];
    char nombre[20];
    float precio;
    char memoria[20];

};

Dispositivo crearDispositivoPorParametro(char t[],char m[],char n[],float p,char me[]){

    Dispositivo d = new dispositivoStruct;
    strcpy(d->tipo,t);
    strcpy(d->marca,m);
    strcpy(d->nombre,n);
    d->precio=p;
    strcpy(d->memoria,me);

    return d;
};
Dispositivo crearDispositivo(){
    Dispositivo d = new dispositivoStruct;
    std::cout<<"\nIngrese el tipo de dispositivo: ";
    std::cin>>d->tipo;
    std::cout<<"\nIngrese la marca: ";
    std::cin>>d->marca;
    std::cout<<"\nIngrese nombre: ";
    std::cin>>d->nombre;
    std::cout<<"\nIngrese precio: ";
    std::cin>>d->precio;
    std::cout<<"\nIngrese la cantidad de memoria: ";
    std::cin>>d->memoria;
    return d;
};

void mostrarDispositivo(Dispositivo d){
    std::cout<<"\nTipo: "<<d->tipo;
    std::cout<<"\nMarca: "<<d->marca;
    std::cout<<"\nNombre: "<<d->nombre;
    std::cout<<"\nPrecio: $"<<d->precio;
    std::cout<<"\nMemoria: "<<d->memoria;
};

char * getTipo(Dispositivo d){
    return d->tipo;
};
char * getMarca(Dispositivo d){
    return d->marca;
};
char * getNombre(Dispositivo d){
    return d->nombre;
};
float getPrecio(Dispositivo d){
    return d->precio;
};
char * getMemoria(Dispositivo d){
    return d->memoria;
};

void setTipo(Dispositivo d, char t[]){
    strcpy(d->tipo,t);
};
void setMarca(Dispositivo d, char ma[]){
    strcpy(d->marca,ma);
};
void setNombre(Dispositivo d, char n[]){
    strcpy(d->nombre,n);
};
void setPrecio(Dispositivo d, float p){
    d->precio=p;
};
void setMemoria(Dispositivo d, char m[]){
    strcpy(d->memoria,m);
};

