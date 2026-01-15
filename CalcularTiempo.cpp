#include "CalcularTiempo.h"
#include <iostream>
#include <iomanip>

using namespace std;

void calcularTiempo() {
    double distancia, velocidad, tiempo;

    cout << "\n=== CALCULO DE TIEMPO ===\n";
    cout << "Formula: Tiempo = Distancia / Velocidad\n\n";

    // Pedir distancia
    cout << "Ingrese la distancia (metros): ";
    cin >> distancia;

    // Pedir velocidad
    cout << "Ingrese la velocidad (m/s): ";
    cin >> velocidad;

    // Calcular tiempo
    if (velocidad > 0) {
        tiempo = distancia / velocidad;

        cout << fixed << setprecision(2);
        cout << "\nRESULTADO:\n";
        cout << "Distancia: " << distancia << " m\n";
        cout << "Velocidad: " << velocidad << " m/s\n";
        cout << "Tiempo: " << tiempo << " segundos\n";

        // Convertir si es necesario
        if (tiempo >= 60) {
            cout << "Tiempo: " << tiempo / 60 << " minutos\n";
        }
        if (tiempo >= 3600) {
            cout << "Tiempo: " << tiempo / 3600 << " horas\n";
        }
    }
    else {
        cout << "\nERROR: La velocidad debe ser mayor que cero.\n";
    }
}