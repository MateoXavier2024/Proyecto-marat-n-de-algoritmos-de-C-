// Ejercicio 224
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    // Dijkstra simple con priority_queue
    int N=4;
    vector<vector<pair<int,int>>> g(N);
    g[0].push_back({1,1}); g[1].push_back({2,1}); g[2].push_back({3,1});
    vector<int> dist(N,1e9); dist[0]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,0});
    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        for(auto &e:g[u]){
            int v=e.first,w=e.second;
            if(dist[v]>d+w){ dist[v]=d+w; pq.push({dist[v],v}); }
        }
    }
    cout << "Distancias desde 0: ";
    for(int i=0;i<N;i++) cout<<dist[i]<<" ";
    cout<<"
";

    return 0;
}
