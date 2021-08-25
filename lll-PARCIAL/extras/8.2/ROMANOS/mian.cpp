#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    string apellido;
    string apellido2;
    string nombreApellido = "";

    cout << "\nNombre: "; cin >> nombre;
    cout << "Primer Apellido: "; cin >> apellido;
    cout << "Segundo Apellido: "; cin >> apellido2;

    nombreApellido += apellido2 + " " + apellido + " " + nombre;

    cout << "\nNombre completo: " << nombreApellido << endl;

    return 0;
}