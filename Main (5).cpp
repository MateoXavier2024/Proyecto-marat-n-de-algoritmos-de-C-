#include <iostream>
using namespace std;

int main() {
    float distancia, precio;

    cout << "Ingrese la distancia del viaje (km): ";
    cin >> distancia;

    if (distancia < 100)
        precio = distancia * 0.50;
    else if (distancia <= 500)
        precio = distancia * 0.45;
    else
        precio = distancia * 0.40;

    cout << "El costo total del viaje es: $" << precio << endl;

    return 0;
}

