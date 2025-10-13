// Ejercicio 297
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Buscaminas console demo: place mines and show board\n";
vector<vector<char>> b(5,vector<char>(5,'.')); b[1][1]='*';
for(auto &r:b){ for(auto c:r) cout<<c; cout<<"\n"; }

    return 0;
}
