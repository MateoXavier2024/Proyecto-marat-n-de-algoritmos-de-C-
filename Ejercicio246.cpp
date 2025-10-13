// Ejercicio 246
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Boyer-Moore simplificado: use find para demo\n";
string t,p; cin >> t >> p;
auto pos = t.find(p);
if(pos!=string::npos) cout << "Encontrado en "<<pos<<"\n"; else cout<<"No encontrado\n";

    return 0;
}
