#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    unordered_set<int> us;
    cin >> n;
    for (int i=0; i < n; i++) {
        int k;
        cin >>k;
        us.insert(k);
    }
    cout << us.size();
    return 0;
}