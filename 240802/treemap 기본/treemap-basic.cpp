#include <iostream>
#include <map>
#include <string>
using namespace std;

int n;
string cmd;

int main() {
    cin >> n;
    map<int, int> m;
    for (int i = 0 ; i < n; i++){
        cin >> cmd;
        if (cmd == "add") {
            int k, v;
            cin >> k >> v;
            m[k] = v;
        } else if (cmd == "find") {
            int k;
            cin >> k;
            cout << (m.find(k) != m.end() ? to_string(m[k]) : "None") << "\n";
        } else if (cmd == "remove") {
            int k;
            cin >> k;
            m.erase(k);
        } else if (cmd == "print_list"){
            map<int, int>::iterator it;
            if (m.empty()) {
                cout << "None" << "\n";
            } else {
                for (it = m.begin(); it != m.end(); it++){
                    cout << (it -> second) << " "; 
                }
                cout << "\n";
            }
        }
    }
    return 0;
}