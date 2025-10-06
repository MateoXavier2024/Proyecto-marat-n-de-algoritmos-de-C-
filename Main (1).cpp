#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    if (a > b)
        cout << a << " es mayor." << endl;
    else
        cout << b << " es mayor." << endl;
    return 0;
}
