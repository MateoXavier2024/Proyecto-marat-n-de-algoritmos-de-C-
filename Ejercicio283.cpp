// Ejercicio 283
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "CSV->JSON simple converter: read line, split by commas, output JSON array\n";
string line; getline(cin,line); // single line CSV
cout << "[\"" << line << "\"]\n";

    return 0;
}
