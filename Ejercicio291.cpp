// Ejercicio 291
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Metric collector demo: measure time of loop and print count\n";
using clk = chrono::high_resolution_clock;
auto t0=clk::now();
int cnt=0; for(int i=0;i<100000;i++) cnt++;
auto t1=clk::now();
cout<<"Tiempo (ms): "<<chrono::duration_cast<chrono::milliseconds>(t1-t0).count()<<"\n";

    return 0;
}
