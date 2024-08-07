#include <iostream>
using namespace std;

int n, k;
int num;
int main() {
    cin >> n >> k;
    int res = (-100 * k) -1;
    int prefix_sum[n+1] = {};

    prefix_sum[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> num;
        prefix_sum[i] = prefix_sum[i - 1] + num;
    }

    for (int i = k; i <= n; i++){
        int tmp = prefix_sum[i] - prefix_sum[i-k];
        if (res < tmp){
            res = tmp;
        }
    }
    cout << res;
    return 0;
}