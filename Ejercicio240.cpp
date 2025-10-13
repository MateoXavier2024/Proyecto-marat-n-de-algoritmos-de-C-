// Ejercicio 240
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// Segment Tree basic for sum with point updates
int n=8;
vector<int> seg(2*n,0);
auto build=[&](vector<int>&a){
    for(int i=0;i<n;i++) seg[n+i]=a[i];
    for(int i=n-1;i>0;--i) seg[i]=seg[i<<1]+seg[i<<1|1];
};
vector<int>a={1,2,3,4,5,6,7,8};
build(a);
cout << "Segment tree root sum: " << seg[1] << "\n";

    return 0;
}
