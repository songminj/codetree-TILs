#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    unordered_map<int, int> um;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n-1; i++){
        for (int j = i+1; j < n; j++){
            int key = v[i] + v[j];
            um[key]++;
        }
    }
    cout << um[k];
    return 0;
}