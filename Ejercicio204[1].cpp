// Ejercicio 204
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// Seleccion con mediana de medianas (simplified: use nth_element for demo)
cout << "Ingrese 5 enteros separados por espacios:\n";
vector<int> a(5);
for(int i=0;i<5;i++) cin >> a[i];
nth_element(a.begin(), a.begin()+2, a.end());
cout << "Mediana aproximada: " << a[2] << "\n";

    return 0;
}
