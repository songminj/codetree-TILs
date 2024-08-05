#include <iostream>
#include <set>
#include <utility>
using namespace std;

int n, m;
int x, y;
int main() {
    cin >> n >> m;
    set<pair<int, int> > s;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        s.insert(make_pair(x, y));
    }
    for (int i = 0; i< m; i++) {
        cin >>x >> y;
        auto it = s.lower_bound(make_pair(x, y));
        if (it == s.end()){
            cout <<"-1 -1\n";
        } else {
            cout << it->first << " " << it->second << "\n";
        }
    }
    return 0;
}