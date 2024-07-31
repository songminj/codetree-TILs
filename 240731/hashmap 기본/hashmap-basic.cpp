#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n ; 
    unordered_map<int, int> m;
    cin >> n;
    for (int i = 0; i < n; i++){
        string order;
        cin >> order;
        if (order == "add"){ 
            int k, v;
            cin >> k >> v;
            m[k] =v;
        } else if (order == "remove") {
            int k;
            cin >> k; 
            m.erase(k);
        } else if (order == "find") {
            int k;
            cin >> k;
            if (m.find(k) != m.end()) {
                cout << m[k] << "\n";
            } else {
                cout << "None" << "\n";
            }
        }

        
    }
    return 0;
}