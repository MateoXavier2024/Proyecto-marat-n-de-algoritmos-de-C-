// Ejercicio316.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <functional>

using namespace std;

int main() {
    int n; cin>>n; vector<int> a(n); for(int i2=0;i2<n;i2++) cin>>a[i2];
    function<void(int,int)> qs = [&](int l,int r){ if(l>=r) return; int p=a[(l+r)/2], i=l, j=r;
        while(i<=j){ while(a[i]<p) i++; while(a[j]>p) j--; if(i<=j){ swap(a[i],a[j]); i++; j--; } }
        if(l<j) qs(l,j); if(i<r) qs(i,r);
    };
    qs(0,n-1);
    for(auto x:a) cout<<x<<" "; cout<<"\n";

    return 0;
}
