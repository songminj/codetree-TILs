#include <iostream>
using namespace std;

int n, k;
int num;
int main() {
    cin >> n >> k;
    int res =0;
    int prefix_sum[n+1][n+1] = {};
    prefix_sum[0][0] = 0;
    for (int i = 0; i <= n; i++){
        prefix_sum[i][0] = 0;
        prefix_sum[0][i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++){
            cin >> num;
            prefix_sum[i][j] = num + prefix_sum[i-1][j] + prefix_sum[i][j-1] - prefix_sum[i-1][j-1];
        }
    }

    for (int i = k; i <= n; i++){
        for (int j = k; j <= n; j++) {
            int tmp = prefix_sum[i][j] - prefix_sum[i-1][j] - prefix_sum[i][j-1] + prefix_sum[i-1][j-1];
            if (res < tmp) {
                res = tmp;
            }
        }
    }
    cout << res;
    return 0;
}