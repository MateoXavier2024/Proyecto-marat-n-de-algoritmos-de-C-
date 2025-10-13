// Ejercicio48.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    double c;
    cout << "Ejercicio 48: Ingrese grados Celsius: ";
    if(!(cin>>c)) return 0;
    cout << "Fahrenheit: " << (c * 9.0/5.0 + 32.0) << "\n";

    return 0;
}
