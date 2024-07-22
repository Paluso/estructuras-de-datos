#ifndef DISPOSITIVO_H_INCLUDED
#define DISPOSITIVO_H_INCLUDED
//Axiomas
/* */
struct dispositivoStruct;

typedef struct dispositivoStruct * Dispositivo;

Dispositivo crearDispositivoPorParametro(char t[],char m[],char n[],float p,char me[]);

Dispositivo crearDispositivo();

void mostrarDispositivo(Dispositivo d);

char * getTipo(Dispositivo d);
char * getMarca(Dispositivo d);
char * getNombre(Dispositivo d);
float getPrecio(Dispositivo d);
char * getMemoria(Dispositivo d);

void setTipo(Dispositivo d,char t[]);
void setMarca(Dispositivo d, char ma[]);
void setNombre(Dispositivo d, char n[]);
void setPrecio(Dispositivo d, float p);
void setMemoria(Dispositivo d, char m[]);


#endif // DISPOSITIVO_H_INCLUDED
