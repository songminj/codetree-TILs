#include <iostream>
using namespace std;

int n, k;
int num;
int main() {
    int res = 0;
    int prefix_sum[n+1] {};
    cin >>n >> k;
    prefix_sum[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> num;
        prefix_sum[i] = prefix_sum[i-1] + num;
    }
    for (int i= 1; i <= n; i++){
        for (int j = 0; j <= i-1; j++){
            if (prefix_sum[i]-prefix_sum[j] == k) {
                res++;
            }
        }
    }
    cout << res;
    return 0;
}