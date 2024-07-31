#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >>n;
    unordered_map<string, int> m;
    
    for (int i = 0; i <n; i++){
        string k;
        cin >> k;
        if (m.find(k) != m.end()) {
            m[k]++;
        } else {
            m[k] = 1;
        }
    }

    int val =0;
    for(const auto& elem : m){
        if (val < elem.second) {
            val = elem.second;
        }
    }
    cout << val;
    return 0;
}