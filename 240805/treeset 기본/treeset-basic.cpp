#include <iostream>
#include <set>
using namespace std;

int n;
int main() {
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++){
        string cmd;
        int k;
        cin >> cmd;
        if (cmd == "add") {
            cin >> k;
            s.insert(k);
        } else if ( cmd == "remove"){
            cin >> k;
            s.erase(k);
        } else if (cmd == "find") {
            cin >> k;
            if (s.find(k) != s.end()) {
                cout << "true\n";
            } else {
                cout << "false\n";
            }
        } else if (cmd == "lower_bound") {
            int k;
            cin >> k;
            auto it = s.lower_bound(k);
            if (it != s.end()) {
                cout << *it << "\n";
            } else {
                cout << "None\n";
            }
        } else if (cmd == "upper_bound") {
            int k;
            cin >> k;
            auto it = s.upper_bound(k);
            if (it != s.end()) {
                cout << *it << "\n";
            } else {
                cout << "None\n";
            }
        } else if (cmd == "largest"){
            if (s.rbegin() != s.rend()){
                cout << *s.rbegin() <<"\n";
            } else {
                cout << "None\n";
            }
        } else if (cmd == "smallest"){
            if (s.rbegin() != s.rend()){
                cout << *s.begin() <<"\n";
            } else {
                cout << "None\n";
            }
        }
    }
    return 0;
}