// Ejercicio97.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    int y;
    cout << "Ejercicio 97: Ingrese año: ";
    if(!(cin>>y)) return 0;
    bool b = (y%4==0 && y%100!=0) || (y%400==0);
    cout << (b?"Bisiesto\n":"No bisiesto\n");

    return 0;
}
