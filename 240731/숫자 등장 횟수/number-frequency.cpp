#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> um;

    for (int i = 0; i < n ; i++) {
        int k;
        cin >> k;
        if (um.find(k) != um.end()) {
            um[k]++;
        } else {
            um[k] =1;
        }
    }
    for (int i =0; i < m ; i++) {
        int k;
        cin >> k;
        cout << um[k] << " ";
    }
    return 0;
}