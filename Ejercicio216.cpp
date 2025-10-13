// Ejercicio 216
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// Template: motor de plantillas que reemplace {{var}} en texto
string s;
cout << "Ingrese texto con {{name}}: ";
getline(cin,s);
size_t p = s.find("{{name}}");
if(p!=string::npos) s.replace(p,8,"Usuario");
cout << s << "\n";

    return 0;
}
