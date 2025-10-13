// Ejercicio361.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    auto maxv = [](const vector<int>&v){ return *max_element(v.begin(), v.end()); };
    int n; cin>>n; vector<int> v(n); for(int i2=0;i2<n;i2++) cin>>v[i2];
    cout << "Max: " << (n?maxv(v):0) << "\n";

    return 0;
}
