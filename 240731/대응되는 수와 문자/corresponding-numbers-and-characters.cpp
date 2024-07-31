#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);  // 더 빠른 입출력 설정
    cin.tie(NULL);

    int n, m;
    unordered_map<string, string> um;
    cin >> n >> m;
    for (int i = 1; i <= n ; i++){
        string k;
        cin >> k;
        string newv = to_string(i);
        um[k] = newv;
        um[newv] = k;
    }
    for (int i = 0; i < m ; i++){
        string v;
        cin >> v;
        cout << um[v] << "\n";
    }


    return 0;
}