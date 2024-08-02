#include <iostream>
#include <map>
#include <iomanip> 
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
    double total = n;
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++){
        double rate = (it->second / total) * 100;
        cout << it->first << " ";
        cout << fixed << setprecision(4) << rate << "\n";
    }
    return 0;
}