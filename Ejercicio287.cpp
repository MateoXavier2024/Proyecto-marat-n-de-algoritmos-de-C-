// Ejercicio 287
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Subastas demo: recibir ofertas y elegir mayor\n";
int best=0, offer;
while(cin>>offer){ best=max(best,offer); if(cin.peek()=='\n') break; }
cout<<"Mejor oferta: "<<best<<"\n";

    return 0;
}
