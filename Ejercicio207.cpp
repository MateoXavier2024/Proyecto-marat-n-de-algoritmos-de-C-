// Ejercicio 207
#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {

// Matriz dispersa en map<pair<int,int>,double>
cout << "Ejemplo matriz sparse 2x2 con un valor no nulo\n";
map<pair<int,int>,double> m;
m[{0,1}] = 3.5;
for(auto &kv: m) cout << "(" << kv.first.first << "," << kv.first.second << ")=" << kv.second << "\n";

    return 0;
}
