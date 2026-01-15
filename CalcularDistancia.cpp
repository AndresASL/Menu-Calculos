#include "calcularDistancia.h"
#include <iostream>
#include <iomanip>

using namespace std;

void calcularDistancia() {
    double velocidad, tiempo, distancia;

    cout << "\nCALCULO DE DISTANCIA \n";

    // Pedir velocidad
    cout << "Ingrese la velocidad (m/s): ";
    cin >> velocidad;

    // Pedir tiempo
    cout << "Ingrese el tiempo (segundos): ";
    cin >> tiempo;

    // Calcular distancia
    distancia = velocidad * tiempo;

    cout << fixed << setprecision(2);
    cout << "\nRESULTADO:\n";
    cout << "Velocidad: " << velocidad << " m/s\n";
    cout << "Tiempo: " << tiempo << " s\n";
    cout << "Distancia: " << distancia << " m\n";

    // Mostrar en kilómetros si es grande
    if (distancia >= 1000) {
        cout << "Distancia: " << distancia / 1000 << " km\n";
    }
}