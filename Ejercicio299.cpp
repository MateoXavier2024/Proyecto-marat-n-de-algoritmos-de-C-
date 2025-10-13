// Ejercicio 299
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Benchmark demo: compare two implementations of sum\n";
vector<int> a(1000,1); long long s=0; for(auto v:a) s+=v; cout<<s<<"\n";

    return 0;
}
