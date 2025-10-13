// Ejercicio383.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    int n; cout << "Ejercicio 383: n Fibonacci: "; if(!(cin>>n)) return 0;
    long long a=0,b=1;
    for(int k=0;k<n;k++){ cout<<a<<" "; long long t=a+b; a=b; b=t; } cout<<"\n";

    return 0;
}
