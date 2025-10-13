// Ejercicio37.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    double saldo=1000;
    int opt; cout << "Ejercicio 37: 1-consultar 2-retirar: "; cin>>opt;
    if(opt==1) cout<<"Saldo: "<<saldo<<"\n";
    else if(opt==2){ double r; cin>>r; if(r<=saldo){ saldo-=r; cout<<"Retirado\n";} else cout<<"Fondos insuficientes\n"; }

    return 0;
}
