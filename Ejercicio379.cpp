// Ejercicio379.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    int top=-1; const int MAX=100;
    int st[MAX];
    cout << "Ejercicio 379: push 3 valores:\n";
    for(int k=0;k<3;k++){ int v; cin>>v; st[++top]=v; }
    cout << "Pop: "; while(top>=0) cout<<st[top--]<<" "; cout<<"\n";

    return 0;
}
