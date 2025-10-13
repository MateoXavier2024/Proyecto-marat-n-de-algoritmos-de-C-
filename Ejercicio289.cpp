// Ejercicio 289
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "RPN calculator demo: evaluate '3 4 +' from stdin\n";
double a,b; char op;
if(cin>>a>>b>>op){
  if(op=='+') cout<<a+b<<"\n";
}

    return 0;
}
