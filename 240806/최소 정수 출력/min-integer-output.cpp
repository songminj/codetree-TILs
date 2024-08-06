#include <iostream>
#include <queue>
using namespace std;

int n;
unsigned k;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    priority_queue<unsigned> pq;
    for (int i = 0; i < n; i++){
        cin >> k;
        if (k != 0) {
            pq.push(-k);
        } else {
            if (!pq.empty()){
                cout << -pq.top() << endl;
                pq.pop();
            } else {
                cout << "0\n"
            }
        }
    }
    return 0;
}