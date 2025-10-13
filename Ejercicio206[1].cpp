// Ejercicio 206
#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int main() {

// Callbacks usando std::function: ejecutar funciones registradas
#include <functional>
vector<function<void()>> callbacks;
callbacks.push_back([](){ cout << "Callback 1 ejecutado\n"; });
callbacks.push_back([](){ cout << "Callback 2 ejecutado\n"; });
for(auto &cb: callbacks) cb();

    return 0;
}
