// Ejercicio 202
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// Analisis lexico simple: tokeniza numeros, identificadores y operadores
string s;
cout << "Ingrese una linea: ";
getline(cin, s);
cout << "Tokens encontrados:\n";
string cur;
for(char c: s){
    if(isspace(c)){
        if(!cur.empty()){ cout << cur << "\n"; cur.clear(); }
    } else if(isalnum(c) || c=='_'){
        cur.push_back(c);
    } else {
        if(!cur.empty()){ cout << cur << "\n"; cur.clear(); }
        cout << c << "\n";
    }
}
if(!cur.empty()) cout << cur << "\n";

    return 0;
}
