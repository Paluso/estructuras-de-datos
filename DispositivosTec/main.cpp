#include <iostream>
#include <cstring>
#include "dispositivo.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Dispositivo d1=crearDispositivo("Celular","Nokia","1100",500,"500MB");
    mostrarDispositivo(d1);
    return 0;
}
