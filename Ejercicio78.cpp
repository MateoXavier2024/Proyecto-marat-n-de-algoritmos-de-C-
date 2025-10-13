// Ejercicio78.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    class Persona {
    public:
        string nombre; int edad;
        Persona(string n,int e):nombre(n),edad(e){}
        void saludar() const { cout << "Hola, soy "<<nombre<<" y tengo "<<edad<<" años.\n"; }
    };
    string n; int e;
    cout<<"Ejercicio 78: nombre y edad: "; cin>>n>>e;
    Persona p(n,e); p.saludar();

    return 0;
}
