#include <iostream>
using namespace std;

int func(int n, int N){
    if (n == 0) {
        return 1;
    }
    int count = 0;
    for (int i = 1; i <= N && i <= n; i++){
        count += func(n-i, N);
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    int result = func(N, N);
    cout << result;
    return 0;
}