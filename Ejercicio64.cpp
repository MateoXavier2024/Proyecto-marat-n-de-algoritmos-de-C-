// Ejercicio64.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n; cin>>n; vector<int> a(n); for(int i2=0;i2<n;i2++) cin>>a[i2];
    sort(a.begin(), a.end());
    int key; cin>>key;
    int l=0,r=n-1; bool found=false;
    while(l<=r){ int m=(l+r)/2; if(a[m]==key){found=true;break;} if(a[m]<key) l=m+1; else r=m-1; }
    cout << (found?"Encontrado\n":"No encontrado\n");

    return 0;
}
