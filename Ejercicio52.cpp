// Ejercicio52.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    int a,b;
    cout << "Ejercicio 52: Ingrese a y b: ";
    if(!(cin>>a>>b)) return 0;
    auto swap_ptr = [](int *x,int *y){ int t=*x; *x=*y; *y=t; };
    swap_ptr(&a,&b);
    cout << "Intercambiados: a="<<a<<" b="<<b<<"\n";

    return 0;
}
