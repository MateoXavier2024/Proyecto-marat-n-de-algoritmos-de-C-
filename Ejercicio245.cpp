// Ejercicio 245
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Simulador fisica Euler: actualizar posicion simple\n";
double x=0,v=1,dt=0.1;
for(int i=0;i<10;i++){ x+=v*dt; cout<<x<<" "; }
cout<<"\n";

    return 0;
}
