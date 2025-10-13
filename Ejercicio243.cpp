// Ejercicio 243
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "App inventario demo: agrega item y muestra lista\n";
vector<string> inv; string s; cin.ignore();
getline(cin,s); inv.push_back(s);
cout << "Inventario:\n"; for(auto &it:inv) cout<<it<<"\n";

    return 0;
}
