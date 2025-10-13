// Ejercicio33.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <functional>

using namespace std;

int main() {
    function<long long(int)> fact = [&](int n)->long long{ if(n<=1) return 1; return n*fact(n-1); };
    int n; cout << "Ejercicio 33: Ingrese n: "; if(!(cin>>n)) return 0;
    cout << "Factorial: " << fact(n) << "\n";

    return 0;
}
