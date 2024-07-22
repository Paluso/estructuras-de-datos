#include <iostream>
#include <cstring>
#include "empleado.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    Empleado emp1=cargarEmpleado();
    mostrarEmpleado(emp1);
    return 0;
}
