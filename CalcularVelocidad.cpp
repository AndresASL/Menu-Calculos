#include "CalcularVelocidad.h"
#include <iostream>
#include <iomanip>

using namespace std;

void calcularVelocidad() {
    double distancia, tiempo, velocidad;

    cout << "\n=== CALCULO DE VELOCIDAD ===\n";
    cout << "Formula: Velocidad = Distancia / Tiempo\n\n";

    // Pedir distancia
    cout << "Ingrese la distancia (metros): ";
    cin >> distancia;

    // Pedir tiempo
    cout << "Ingrese el tiempo (segundos): ";
    cin >> tiempo;

    // Calcular velocidad
    if (tiempo > 0) {
        velocidad = distancia / tiempo;

        cout << fixed << setprecision(2);
        cout << "\nRESULTADO:\n";
        cout << "Distancia: " << distancia << " m\n";
        cout << "Tiempo: " << tiempo << " s\n";
        cout << "Velocidad: " << velocidad << " m/s\n";
        cout << "Velocidad: " << velocidad * 3.6 << " km/h\n";
    }
    else {
        cout << "\nERROR: El tiempo debe ser mayor que cero.\n";
    }
}