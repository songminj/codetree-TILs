#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, m;
    unordered_set<int> u1;
    cin >> n;
    for (int i=0; i<n; i++){
        int k;
        cin >> k;
        u1.insert(k);
    }
    cin >> m;
    for (int i =0; i<m; i++){
        int j;
        cin >> j;
        if (u1.find(j) != u1.end()){
            cout << "1 ";
        } else {
            cout << "0 ";
        }
    }
    return 0;
}