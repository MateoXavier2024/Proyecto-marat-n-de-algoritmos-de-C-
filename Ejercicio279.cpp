// Ejercicio 279
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Job queue demo: push jobs and process sequentially\n";
queue<string> q;
q.push("job1"); q.push("job2");
while(!q.empty()){ cout<<"Processing "<<q.front()<<"\n"; q.pop(); }

    return 0;
}
