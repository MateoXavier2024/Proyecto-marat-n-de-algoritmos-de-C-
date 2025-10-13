// Ejercicio 237
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Interfaz consola: buscar por nombre en registros dummy\n";
vector<string> db={"ana","juan","maria"};
string q; cin >> q;
for(auto &s:db) if(s.find(q)!=string::npos) cout<<s<<"\n";

    return 0;
}
