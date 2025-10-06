#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << a << " es el mayor." << endl;
    else if (b >= a && b >= c)
        cout << b << " es el mayor." << endl;
    else
        cout << c << " es el mayor." << endl;
    return 0;
}
