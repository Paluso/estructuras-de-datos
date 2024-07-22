#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct personaStruct;

typedef struct personaStruct * Persona;

Persona crearPersona(char n[],char a[],int d,int anio,int mes,int dia,char tDisp[],char mDisp[],char nDisp[],float pDisp,char meDisp[]);

Persona crearPersonaTeclado();

void mostrarPersona(Persona p);

char * getNombre(Persona p);
char * getApellido(Persona p);
int getDni(Persona p);

void setNombre(Persona p , char n[]);
void setApellido(Persona p, char a[]);
void setDni(Persona p, int d);

#endif // PERSONA_H_INCLUDED
