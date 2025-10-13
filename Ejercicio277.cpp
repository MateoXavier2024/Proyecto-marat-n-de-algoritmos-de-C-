// Ejercicio 277
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Matrices 3x3 operations demo: identity matrix printed\n";
vector<vector<double>> I(3,vector<double>(3,0));
for(int i=0;i<3;i++) I[i][i]=1;
for(auto &r:I){ for(auto v:r) cout<<v<<" "; cout<<"\n"; }

    return 0;
}
