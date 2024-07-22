#include <iostream>
#include <cstring>
#include "persona.h"
#include "../DispositivosTec/dispositivo.h"
#include "../Fecha/fecha.h"

#define TAM 1

struct personaStruct{

    char nombre[20];
    char apellido[20];
    int dni;

    Dispositivo dispositivos[TAM];

    Fecha nacimiento;
};

Persona crearPersona(char n[],char a[],int d,int anio,int mes,int dia,char tDisp[],char mDisp[],char nDisp[],float pDisp,char meDisp[]){
    Persona p = new personaStruct;
    strcpy(p->nombre,n);
    strcpy(p->apellido,a);
    p->dni=d;
    p->nacimiento=cargarFechaPorParametro(anio,mes,dia);

    for(int i=0;i<TAM;i++){
        p->dispositivos[i]=crearDispositivoPorParametro(tDisp,mDisp,nDisp,pDisp,meDisp);
    }
    return p;
};

Persona crearPersonaTeclado(){
    Persona p = new personaStruct;
    std::cout<<"\n*********************\n";
    std::cout<<"\nIngrese nombre del usuario: ";
    std::cin>>p->nombre;
    std::cout<<"\nIngrese el apellido:";
    std::cin>>p->apellido;
    std::cout<<"\nDNI: ";
    std::cin>>p->dni;
    std::cout<<"\nIngrese fecha de nacimiento: ";
    p->nacimiento=cargarFecha();
    for(int i=0;i<TAM;i++){
        p->dispositivos[i]=crearDispositivo();
    }
    return p;
};

void mostrarPersona(Persona p){
    std::cout<<"\n\n***********PERSONA***********";
    std::cout<<"\nNombre: "<<p->nombre;
    std::cout<<"\nApellido: "<<p->apellido;
    std::cout<<"\nDNI: "<<p->dni;
    std::cout<<"\nFecha de nacimiento: ";
    mostrarFecha(p->nacimiento);
    std::cout<<"\n**********DISPOSITIVOS VINCULADOS*********\n";
    for(int i=0;i<TAM;i++){
        std::cout<<"\n----Dispositivos:"<<i+1;
        mostrarDispositivo(p->dispositivos[i]);
    }
};

char * getNombre(Persona p){
    return p->nombre;
};
char * getApellido(Persona p){
    return p->apellido;
};
int getDni(Persona p){
    return p->dni;
};

void setNombre(Persona p , char n[]){
    strcpy(p->nombre,n);
};
void setApellido(Persona p, char a[]){
    strcpy(p->apellido,a);
};
void setDni(Persona p, int d){
    p->dni=d;
};
