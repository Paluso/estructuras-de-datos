#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

struct empleadoStruct;

typedef struct empleadoStruct * Empleado;

Empleado cargarEmpleado();

void mostrarEmpleado(Empleado e);

int getLegajo(Empleado e);
float getSueldo(Empleado e);
char * getEmpresa(Empleado e);

void setLegajo(Empleado e,int l);
void setSueldo(Empleado e, float s);
void setEmpresa(Empleado e,char em[]);


#endif // EMPLEADO_H_INCLUDED
