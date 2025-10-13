// Ejercicio 252
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Word-wrap simple: dividir texto en lineas de max 20 chars\n";
string s; getline(cin,s);
for(size_t i=0;i<s.size(); i+=20) cout<<s.substr(i,20)<<"\n";

    return 0;
}
