#include <iostream>
#include <iomanip>
#include <limits>
#include "calcularDistancia.h"
#include "calcularTiempo.h"
#include "calcularVelocidad.h"

using namespace std;

int main() {
    int opcion = 0;

    do {
        cout << "MENU\n";
        cout << "1. Calcular Velocidad (v = d/t)\n";
        cout << "2. Calcular Distancia (d = v*t)\n";
        cout << "3. Calcular Tiempo (t = d/v)\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";

        if (!(cin >> opcion)) {
            cout << "\nEntrada no válida. Introduzca un número entre 1 y 4.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            opcion = 0;
            continue;
        }

        switch (opcion) {
        case 1:
            calcularVelocidad();
            break;
        case 2:
            calcularDistancia();
            break;
        case 3:
            calcularTiempo();
            break;
        case 4:
            cout << "\nGracias por usar el programa!\n";
            break;
        default:
            cout << "\nOpcion no valida. Intente de nuevo.\n";
            break;
        }

        cout << "\nPresione Enter para continuar...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();

    } while (opcion != 4);

    return 0;
}