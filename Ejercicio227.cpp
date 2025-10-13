// Ejercicio 227
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

// Trie demo insert/search
struct Node{ bool end=false; Node* c[26] = {}; };
Node* root = new Node();
auto insert = [&](const string &s){ Node* p=root; for(char ch:s) { int i=ch-'a'; if(!p->c[i]) p->c[i]=new Node(); p=p->c[i]; } p->end=true; };
insert("hi");
cout << "Inserted 'hi' into trie\n";

    return 0;
}
