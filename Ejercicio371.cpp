// Ejercicio371.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    string name;
    int age;
    cout << "Ejercicio 371: Ingrese nombre: "; cin >> ws; getline(cin, name);
    cout << "Ingrese edad: "; cin >> age;
    cout << "Hola " << name << ", tienes " << age << " años.\n";

    return 0;
}
