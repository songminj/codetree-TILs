#include <iostream>
#include <map>
using namespace std;

int n;
int main() {
    cin >> n;
    map<int, int> m;
    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if (m.find(x) == m.end()){
            m[x] = i;
        }
    }
    map<int, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << "\n";
    }
    return 0;
}