// Ejercicio 213
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Detectar ciclos en grafo dirigido (ejemplo simple)\n";
int n=3;
vector<vector<int>> g = {{1},{2},{0}}; // ciclo 0->1->2->0
vector<int> vis(n,0);
function<bool(int)> dfs = [&](int u)->bool{
    vis[u]=1;
    for(int v:g[u]){
        if(vis[v]==1) return true;
        if(vis[v]==0 && dfs(v)) return true;
    }
    vis[u]=2;
    return false;
};
cout << (dfs(0) ? "Ciclo detectado\n" : "No hay ciclo\n");

    return 0;
}
