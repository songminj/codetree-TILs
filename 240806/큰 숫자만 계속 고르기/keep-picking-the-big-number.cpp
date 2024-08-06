#include <iostream>
#include <queue>
using namespace std;

int n, m;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    priority_queue<int> pq;
    cin >> n >> m;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        pq.push(k);
    }
    for (int i = 0; i < m; i++) {
        int num = pq.top();
        pq.pop();
        pq.push(num-1);
    }
    cout << pq.top();
    return 0;
}