// Ejercicio366.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <functional>

using namespace std;

int main() {
    int n=3; vector<vector<int>> g; g.resize(3);
    g[0].push_back(1); g[1].push_back(2); g[2].push_back(0);
    vector<int> vis(n,0);
    function<bool(int)> dfs = [&](int u){ vis[u]=1; for(int v:g[u]){ if(vis[v]==1) return true; if(vis[v]==0 && dfs(v)) return true; } vis[u]=2; return false; };
    cout << (dfs(0)?"Ciclo\n":"No ciclo\n");

    return 0;
}
