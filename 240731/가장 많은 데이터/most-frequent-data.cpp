#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);  // 더 빠른 입출력 설정
    cin.tie(NULL);

    int n;
    cin >> n;
    unordered_map<string, int> m;

    int maxFreq = 0;  // 최대 빈도 계산
    for (int i = 0; i < n; ++i) {
        string k;
        cin >> k;
        m[k]++;
        if (m[k] > maxFreq) {
            maxFreq = m[k];
        }
    }

    cout << maxFreq << endl;  // 최대 빈도 출력
    return 0;
}