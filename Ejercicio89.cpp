// Ejercicio89.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <queue>

using namespace std;

int main() {
    int n=5;
    vector<vector<int>> g(n);
    g[0].push_back(1); g[1].push_back(2); g[2].push_back(3);
    vector<int> vis(n,0);
    queue<int>q; q.push(0); vis[0]=1;
    while(!q.empty()){ int u=q.front(); q.pop(); cout<<u<<" "; for(int v:g[u]) if(!vis[v]){vis[v]=1;q.push(v);} }
    cout<<"\n";

    return 0;
}
