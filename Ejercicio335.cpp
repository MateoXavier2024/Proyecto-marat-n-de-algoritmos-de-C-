// Ejercicio335.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

int main() {
    struct Node { int val; Node* next; Node(int v):val(v),next(nullptr){} };
    Node* head=nullptr;
    head = new Node(1); head->next = new Node(2);
    cout << "Ejercicio 335: Lista: ";
    for(Node* p=head;p;p=p->next) cout<<p->val<<" ";
    cout<<"\n";
    while(head){ Node* t=head; head=head->next; delete t; }

    return 0;
}
