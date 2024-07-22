#include <iostream>
#include <cstring>
#include "empleado.h"
#include "../Persona/persona.h"
#include "../Fecha/fecha.h"
#include "../DispositivosTec/dispositivo.h"

#define TAM 2


struct empleadoStruct{
    int legajo;
    float sueldo;
    char empresa[20];

    Persona empleado[TAM];
};

Empleado cargarEmpleado(){
    Empleado e = new empleadoStruct;
    for(int i=0;i<TAM;i++){
        e->empleado[i]=crearPersonaTeclado();
        std::cout<<"\nIngrese legajo: ";
        std::cin>>e->legajo;
        std::cout<<"\nIngrese sueldo del empleado: ";
        std::cin>>e->sueldo;
        std::cout<<"\nIngrese nombre de la empresa: ";
        std::cin>>e->empresa;
    }
    return e;
};

void mostrarEmpleado(Empleado e){
for(int i=0;i<TAM;i++){
    mostrarPersona(e->empleado[i]);
    std::cout<<"\n-----LEGAJO: "<<e->legajo;
    std::cout<<"\n-----SUELDO: $"<<e->sueldo;
    std::cout<<"\n-----EMPRESA: "<<e->empresa;
}
};

int getLegajo(Empleado e){
    return e->legajo;
};
float getSueldo(Empleado e){
    return e->sueldo;
};
char * getEmpresa(Empleado e){
    return e->empresa;
};

void setLegajo(Empleado e,int l){
    e->legajo=l;
};
void setSueldo(Empleado e, float s){
    e->sueldo=s;
};
void setEmpresa(Empleado e,char em[]){
    strcpy(e->empresa,em);
};
