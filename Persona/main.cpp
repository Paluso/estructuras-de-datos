#include <iostream>
#include <cstring>
#include "persona.h"


using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    /*Persona p1=crearPersona("Nahuel","Palucito",35155238);
    mostrarPersona(p1);*/

    Persona p2=crearPersonaTeclado();
    mostrarPersona(p2);
    return 0;
}
