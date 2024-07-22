#include <iostream>
#include "fecha.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Fecha f1=cargarFecha();
    mostrarFecha(f1);

    return 0;
}
