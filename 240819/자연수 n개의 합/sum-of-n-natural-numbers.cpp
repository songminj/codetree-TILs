#include <iostream>
#include <algorithm>

using namespace std;

long long l = 1;
long long r = 2000000000;
long long s;
int main() {
    // 여기에 코드를 작성해주세요.
    cin >> s;

    long long max_num = 0;                      // 최소이므로, 답이 될 수 있는 값보다 더 큰 값으로 설정합니다.
    while (l <= r) {                // [l, r]가 유효한 구간이면 계속 수행합니다.
        long long mid = (l + r) / 2;      // 가운데 위치를 선택합니다.
        if(mid * (mid + 1)/2 <= s) {   // 1부터 n까지의 합이 100보다 같거나 크다면
            l = mid + 1;               // 왼쪽에 조건을 만족하는 숫자가 더 있을 가능성 때문에 right를 바꿔줍니다.
            max_num = max(max_num, mid);   // 답의 후보들 중 최솟값을 계속 갱신해줍니다.
        }
        else                               
            r = mid - 1;                // 100보다 작은 경우라면 l를 바꿔줍니다.
    }
    cout << max_num;
    return 0;
}