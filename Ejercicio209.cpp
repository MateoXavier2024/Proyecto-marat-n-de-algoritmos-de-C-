// Ejercicio 209
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// Buffer circular simple (template-like behavior with ints)
int capacity = 5;
vector<int> buf(capacity);
int head=0, tail=0, size=0;
auto push=[&](int v){ if(size<capacity){ buf[tail]=v; tail=(tail+1)%capacity; ++size; } };
push(10); push(20); push(30);
cout << "Contenido buffer: ";
for(int i=0;i<size;i++) cout << buf[(head+i)%capacity] << " ";
cout << "\n";

    return 0;
}
