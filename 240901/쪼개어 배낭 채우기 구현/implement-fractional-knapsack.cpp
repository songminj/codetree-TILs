#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>  // For fixed and setprecision

using namespace std;

int n, m;
vector<vector<float>> v;

int main() {
    cin >> n >> m;
    v.resize(n, vector<float>(3));

    for (int i = 0; i < n; i++) {
        // 0: 무게 / 1: 가격
        cin >> v[i][0] >> v[i][1];
        v[i][2] = v[i][1] / v[i][0];  // 단위 무게당 가격
    }

    // 2번 인덱스(세 번째 열)를 기준으로 내림차순 정렬
    sort(v.begin(), v.end(), [](const vector<float>& a, const vector<float>& b) {
        return a[2] > b[2];
    });

    float ans = 0.0;
    int idx = 0;
    
    while (m > 0 && idx < n) {
        if (m >= v[idx][0]) {
            ans += v[idx][1];
            m -= v[idx][0];
        } else {
            float tmp = (m / v[idx][0]) * v[idx][1];
            ans += tmp;
            m = 0;  // m가 0이 되면 더 이상 구매할 수 없음
        }
        idx++;
    }

    cout << fixed << setprecision(3) << ans << endl;

    return 0;
}