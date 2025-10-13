// Ejercicio390.cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <sstream>
#include <unordered_map>

using namespace std;

int main() {
    string line; getline(cin, line);
    istringstream iss(line);
    unordered_map<string,int> cnt;
    string w;
    while(iss>>w) cnt[w]++;
    for(auto &kv:cnt) cout<<kv.first<<":"<<kv.second<<"\n";

    return 0;
}
