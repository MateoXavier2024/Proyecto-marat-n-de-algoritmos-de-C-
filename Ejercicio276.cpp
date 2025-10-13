// Ejercicio 276
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Trial division factorization demo: factors of n\n";
int n; cin >> n;
for(int p=2;p*p<=n;p++) while(n%p==0){ cout<<p<<" "; n/=p; }
if(n>1) cout<<n;
cout<<"\n";

    return 0;
}
