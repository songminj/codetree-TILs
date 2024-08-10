#include <iostream>
using namespace std;

int n, q, k;
int a, b;
int main() {
    cin >> n >> q;
    int prefix_sum[n+1][3] = {};
    for (int i = 0; i < 3; i++) {
        prefix_sum[0][i] = 0;
    }
    for (int i = 1 ; i <= n; i++){
        cin >> k;
        for (int j = 0; j <3 ; j++) {
            if (k-1 == j) {
                prefix_sum[i][j] = prefix_sum[i-1][j] + 1;
            } else {
                prefix_sum[i][j] = prefix_sum[i-1][j];
            }
        }
    }
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        for (int j = 0; j < 3; j++) {
            cout << prefix_sum[b][j] - prefix_sum[a - 1][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}