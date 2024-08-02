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
            int s = v.size();
            cout << s << "\n";
        } else {
            int k;
            cin >> k;
            if (c == "push_back") {
                v.push_back(k);
            } else if (c == "pop_back") {
                v.pop_back();
            } else if (c == "get") {
                cout << v[k-1] << "\n";
            }
        }
    }
    return 0;
}