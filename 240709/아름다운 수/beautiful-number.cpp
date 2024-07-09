#include <iostream>
#include <vector>
using namespace std;

int func(int n) {
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] += dp[i - j];
        }
    }
    
    return dp[n];
}

int main() {
    int N;
    cin >> N;
    
    cout << func(N);
    return 0;
}