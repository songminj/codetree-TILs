#include <iostream>
using namespace std;

int n, k;
int num;
int main() {
    cin >> n >> k;
    int res =0;
    int grid[501][501] = {};
    int prefix_sum[501][501] = {};

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> grid[i][j];
        }
    }
    prefix_sum[0][0] = 0;
    for (int i =1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            prefix_sum[i][j] = grid[i][j] + prefix_sum[i-1][j] +prefix_sum[i][j-1] - prefix_sum[i-1][j-1];
        }
    }

    for (int i = k; i <= n; i++){
        for (int j = k; j <= n; j++) {
            int tmp = prefix_sum[i][j] - prefix_sum[i-k][j] - prefix_sum[i][j-k] + prefix_sum[i-k][j-k];
            if (res < tmp) {
                res = tmp;
            }
        }
    }
    cout << res;
    return 0;
}