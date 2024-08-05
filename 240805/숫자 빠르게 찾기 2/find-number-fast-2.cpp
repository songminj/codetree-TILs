#include <iostream>
#include <set>
using namespace std;

int n, m, k;
int main() {
    cin >> n >> m;
    set<int> s;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        s.insert(p);
    }
    for (int i = 0; i < m; i++){
        cin >> k;
        if (s.lower_bound(k) != s.end()){
            cout << *s.lower_bound(k)<< "\n";
        } else {
            cout << "-1\n";
        }
    }
    return 0;
}