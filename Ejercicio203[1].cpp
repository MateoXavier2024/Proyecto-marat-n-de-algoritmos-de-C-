// Ejercicio 203
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// Mensajeria simulada: vector de strings por usuario
vector<vector<string>> inbox(3);
inbox[0].push_back("Hola desde usuario 1");
inbox[1].push_back("Mensaje para usuario 2");
for(size_t i=0;i<inbox.size();++i){
    cout << "Bandeja " << i << ":\n";
    for(auto &m: inbox[i]) cout << " - " << m << "\n";
}

    return 0;
}
