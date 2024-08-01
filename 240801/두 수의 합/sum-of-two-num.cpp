#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    int res = 0;
    cin >> n >> k;
    unordered_map<int, int> um;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        um[num]++;
    }

    for (const auto& elem : um) {
        int num = elem.first;
        int complement = k - num;
        
        // complement가 um에 있는지 확인하고, 같은 숫자가 아닌 경우만 계산
        if (um.find(complement) != um.end()) {
            if (num == complement) {

                res += (um[num] * (um[num] - 1)) / 2;
            } else {

                res += um[num] * um[complement];
            }

            um[complement] = 0;
        }
    }

    cout << res << endl;
    return 0;
}