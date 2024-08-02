#include <iostream>
#include <map>
using namespace std;

int n;
int main() {
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++) {
        string k;
        cin >> k;
        m[k]++;
    }
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << "\n";
    }
    return 0;
}