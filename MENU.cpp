#include <iostream>
#include <iomanip>
#include <calcularDistancia.h>
#include <calcularTiempo.h>
#include <calcularVelocidad.h>


using namespace std;

// Declaración de funciones de cada clase
void calcularVelocidad();
void calcularDistancia();
void calcularTiempo();

int main() {
    int opcion;

    do {
        // Mostrar menú
        cout << "MENU\n";
        cout << "1. Calcular Velocidad (v = d/t)\n";
        cout << "2. Calcular Distancia (d = v*t)\n";
        cout << "3. Calcular Tiempo (t = d/v)\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Procesar opción seleccionada
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
        cin.ignore();
        cin.get();

    } while (opcion != 4);

    return 0;
}