// Ejercicio 295
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Lectura sensores simulados y logging en CSV demo\n";
ofstream f("sensors.csv"); f<<"time,valor\n"; for(int i=0;i<5;i++) f<<i<<","<<i*2<<"\n"; f.close();

    return 0;
}
