// Ejercicio 210
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// Snapshots simples: copia archivo de texto a snapshot.txt
ofstream f("snapshot.txt");
f << "Snapshot de datos a fecha: demo\n";
f.close();
cout << "Snapshot creado: snapshot.txt\n";

    return 0;
}
