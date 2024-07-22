#include <iostream>
#include <cstring>
#include "fecha.h"


struct fechaStruct{
    int anio;
    int mes;
    int dia;
};

Fecha cargarFechaPorParametro(int a,int m,int d){
    Fecha f=new fechaStruct;
    f->anio=a;
    f->mes=m;
    f->dia=d;

    return f;
}

Fecha cargarFecha(){
    Fecha f= new fechaStruct;
    std::cout<<"\nAnio: ";
    std::cin>>f->anio;
    while(f->anio<1900||f->anio>5000){
        std::cout<<"\nDato incorrecto!\nIngrese el anio nuevamente: ";
        std::cin>>f->anio;
    }
    std::cout<<"\nMes: ";
    std::cin>>f->mes;
    while(f->mes<1||f->mes>12){
        std::cout<<"\nDato incorrecto!\nIngrese el mes nuevamente: ";
        std::cin>>f->mes;
    }
    std::cout<<"\nDia: ";
    std::cin>>f->dia;
    while(f->dia<1||f->dia>31){
        std::cout<<"\nDato incorrecto!\nIngrese el dia nuevamente: ";
        std::cin>>f->dia;
    }
    return f;
};

void mostrarFecha(Fecha f){
    std::cout<<f->dia<<"/"<<f->mes<<"/"<<f->anio<<"\n";

};

int getAnio(Fecha f){
    return f->anio;
};
int getMes(Fecha f){
    return f->mes;
};
int getDia(Fecha f){
    return f->dia;
};

void setAnio(Fecha f,int a){
    f->anio=a;
};
void setMes(Fecha f, int m){
    f->mes=m;
};
void setDia(Fecha f, int d){
    f->dia=d;
};
