#include <iostream>
using namespace std;

int main() {
    float nota, suma = 0, promedio;

    cout << "Ingrese las 5 notas del estudiante:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    promedio = suma / 5;

    cout << "\nEl promedio es: " << promedio << endl;

    if (promedio >= 7)
        cout << "✅ El estudiante aprueba." << endl;
    else
        cout << "❌ El estudiante reprueba." << endl;

    return 0;
}
