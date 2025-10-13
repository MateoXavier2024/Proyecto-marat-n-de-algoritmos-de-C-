// Ejercicio346.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    double r;
    cout << "Ejercicio 346: Ingrese radio: ";
    if(!(cin>>r)) return 0;
    cout << "Area: " << M_PI * r * r << "\n";

    return 0;
}
