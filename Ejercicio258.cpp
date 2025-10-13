// Ejercicio 258
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Analizador de logs demo: cuenta lineas de archivo especificado\n";
string fname; cin >> fname;
ifstream f(fname); string line; int cnt=0;
while(getline(f,line)) cnt++;
cout << "Lineas: " << cnt << "\n";

    return 0;
}
