#include <iostream>
#include <map>
#include <string>
#include <cmath>
using namespace std;

int n;
int main() {
    cin >> n;
    map<string, int> m;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s]++;
    }
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++){
        double rate = round(it->second * 100 / n);
        cout << it->first << " ";
        cout << fixed;
        cout.precision(4);
        cout << rate << "\n";
    }
    return 0;
}