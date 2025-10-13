// Ejercicio 248
#include <iostream>
#include <atomic>
using namespace std;

int main() {

cout << "Contador concurrente con atomic demo\n";
#include <atomic>
atomic<int> c(0);
c++;
cout << "Valor atomic: " << c << "\n";

    return 0;
}
