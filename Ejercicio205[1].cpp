// Ejercicio 205
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// To-Do list simple con persistencia en archivo "todo.txt"
vector<string> tasks;
cout << "Agregar 3 tareas:\n";
string t;
cin.ignore();
for(int i=0;i<3;i++){
    getline(cin,t);
    tasks.push_back(t);
}
ofstream f("todo.txt");
for(auto &s: tasks) f << s << "\n";
f.close();
cout << "Tareas guardadas en todo.txt\n";

    return 0;
}
