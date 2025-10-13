// Ejercicio30.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Ejercicio 30: tamaño del array: ";
    if(!(cin>>n)) return 0;
    double *a = new double[n];
    for(int i2=0;i2<n;i2++) cin>>a[i2];
    double sum=0; for(int i2=0;i2<n;i2++) sum+=a[i2];
    cout << "Promedio: " << (n?sum/n:0) << "\n";
    delete[] a;

    return 0;
}
