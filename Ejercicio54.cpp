// Ejercicio54.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    cout << "Ejercicio 54: Ingrese una palabra: ";
    string s; cin >> s;
    char *dst = new char[s.size()+1];
    const char *src = s.c_str();
    char *p=dst;
    while(*src) *p++ = *src++;
    *p='\0';
    cout << "Copiada: " << dst << "\n";
    delete[] dst;

    return 0;
}
