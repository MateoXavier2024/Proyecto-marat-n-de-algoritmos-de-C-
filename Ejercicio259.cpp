// Ejercicio 259
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Mandelbrot ASCII demo: imprime 40x20 approximation\n";
for(int y=0;y<20;y++){ for(int x=0;x<40;x++) cout << ( (x*y)%2 ? '.' : '#'); cout << '\n'; }

    return 0;
}
