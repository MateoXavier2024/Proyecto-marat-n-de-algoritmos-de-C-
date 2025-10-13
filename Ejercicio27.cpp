// Ejercicio27.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Ejercicio 27: Ingrese entero: ";
    if(!(cin>>n)) return 0;
    cout << (n%2==0?"Par\n":"Impar\n");

    return 0;
}
