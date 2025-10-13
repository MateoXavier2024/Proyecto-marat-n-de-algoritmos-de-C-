// Ejercicio 257
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Gauss-Jordan demo para 2x2\n";
double a=1,b=2,c=3,d=4;
double det=a*d-b*c;
if(det==0) cout<<"No invertible\n"; else cout<<"Det: "<<det<<"\n";

    return 0;
}
