#include <iostream>
#include <vector>
#include <string>
using namespace std;

int n;
string c;
int main() {
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> c;
        if (c == "size") {
            cout << v.size() << "\n";
        } else if (c == "pop_back") {
            if (!v.empty())
                v.pop_back();
        } else {
            int k;
            cin >> k;
            if (c == "push_back") {
                v.push_back(k);
            } else if (c == "get") {
                if ( k <= v.size())
                    cout << v[k-1] << "\n";
            }
        }
    }
    return 0;
}