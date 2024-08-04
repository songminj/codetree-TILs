#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<int> us;

    for (int i = 0; i < n; i++) {
        string cmd;
        int k;
        cin >> cmd >> k;

        if (cmd == "add") {
            us.insert(k);
        } else if (cmd == "remove") {
            us.erase(k);
        } else if (cmd == "find") {
            if (us.find(k) != us.end()) {
                cout << "true\n";
            } else {
                cout << "false\n";
            }
        }
    }

    return 0;
}