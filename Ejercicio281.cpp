// Ejercicio 281
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

cout << "Scoreboard demo: guardar record en archivo 'scores.txt'\n";
ofstream f("scores.txt", ios::app); f<<"player1 "<<100<<"\n"; f.close();

    return 0;
}
