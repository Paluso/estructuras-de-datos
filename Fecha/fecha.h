#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

struct fechaStruct;

typedef struct fechaStruct*Fecha;

Fecha cargarFechaPorParametro(int a,int m,int d);
Fecha cargarFecha();

void mostrarFecha(Fecha f);

int getAnio(Fecha f);
int getMes(Fecha f);
int getDia(Fecha f);

void setAnio(Fecha f,int a);
void setMes(Fecha f, int m);
void setDia(Fecha f, int d);


#endif // FECHA_H_INCLUDED
