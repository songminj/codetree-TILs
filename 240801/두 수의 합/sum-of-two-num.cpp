#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    int res = 0;
    cin >> n >> k;
    unordered_map<int, int> um;
    unordered_map<int, bool> check;

    for (int i = 0; i < n; i++) {
        int newk;
        cin >> newk;
        um[newk]++;
    }
    for (const auto& elem : um){
        int num = elem.first;
        int con = k-num;
        if (!check[num]){
            check[num] = true;
            check[con] = true;
            res += um[num]*um[con];
        }
    }
    cout << res;
    return 0;
}