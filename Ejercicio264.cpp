// Ejercicio 264
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "XML minimal parser demo: busca etiqueta <tag>content</tag>\n";
string s; getline(cin,s);
size_t p1=s.find('<'); size_t p2=s.find('>');
if(p1!=string::npos && p2!=string::npos) cout<<s.substr(p1,p2-p1+1)<<"\n";

    return 0;
}
