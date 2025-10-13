// Ejercicio 286
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Union-Find implementation and Kruskal demo\n";
int n=4; vector<int> p(n); iota(p.begin(),p.end(),0);
function<int(int)> findp = [&](int x){ return p[x]==x?x:p[x]=findp(p[x]); };
auto unite=[&](int a,int b){ a=findp(a); b=findp(b); if(a!=b) p[b]=a; };
unite(0,1); unite(2,3);
cout<<"UF demo done\n";

    return 0;
}
