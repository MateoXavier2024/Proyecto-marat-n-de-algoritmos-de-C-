// Ejercicio 211
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Conversor de fechas simple: solo muestra dia/mes/anio recibido.\n";
int d,m,y;
cout << "Ingrese d m y (ej: 1 1 2025): ";
if(cin>>d>>m>>y) cout << "Fecha: " << d << "/" << m << "/" << y << "\n";

    return 0;
}
