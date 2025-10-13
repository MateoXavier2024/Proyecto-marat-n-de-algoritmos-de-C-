// Ejercicio 249
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Perceptron simple demo: peso y umbral aplicado\n";
double w=0.5, x=1.0, thresh=0.4;
cout << ((w*x>thresh)?"Activo\n":"Inactivo\n");

    return 0;
}
