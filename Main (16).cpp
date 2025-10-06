#include <iostream>
#include <iostream>
#include <cstdlib> // Para rand() y srand()
#include <ctime>   // Para time()
using namespace std;

int main() {
    int numero;
   
    // Inicializa la semilla aleatoria basada en la hora actual
    srand(time(0));

    // Genera un número aleatorio entre 1 y 100
    numero = rand() % 100 + 1;

    // Muestra el número generado
    cout << "El numero generado es: " << numero << "\n";

    // Verifica si es par o impar
    if (numero % 2 == 0)
        cout << "El numero es par.\n";
    else
        cout << "El numero es impar.\n";

    return 0;
}