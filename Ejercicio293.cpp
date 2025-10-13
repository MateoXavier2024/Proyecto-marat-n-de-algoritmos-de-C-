// Ejercicio 293
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "DSL parser demo: aceptamos 'print X' y mostramos X\n";
string cmd,arg; cin>>cmd>>arg;
if(cmd=="print") cout<<arg<<"\n";

    return 0;
}
