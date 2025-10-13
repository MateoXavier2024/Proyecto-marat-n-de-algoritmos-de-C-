// Ejercicio311.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    const int CAP=5; int q[CAP]; int head=0, tail=0, sz=0;
    cout << "Ejercicio 311: insertar 3 enteros: ";
    for(int k=0;k<3;k++){ int v; cin>>v; if(sz<CAP){ q[tail]=v; tail=(tail+1)%CAP; sz++; } }
    cout << "Extraer: "; while(sz){ cout<<q[head]<<" "; head=(head+1)%CAP; sz--; } cout<<"\n";

    return 0;
}
