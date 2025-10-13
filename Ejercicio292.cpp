// Ejercicio 292
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Particle sim demo: simple positions updated with gravity-like force\n";
vector<double> x={0,1,2}; for(int i=0;i<5;i++){ for(auto &v:x) v+=0.1; }
for(auto v:x) cout<<v<<" "; cout<<"\n";

    return 0;
}
