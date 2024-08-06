#include <iostream>
#include <queue>
using namespace std;

int n, k;
string cmd;
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    priority_queue<int> pq;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> cmd;
        if (cmd == "push") {
            cin >> k;
            pq.push(k);
        } else if (cmd == "pop"){
            cout << pq.top() << "\n";
            pq.pop();
        } else if (cmd == "size") {
            cout << pq.size()<< "\n";
        } else if (cmd == "empty") {
            if(!pq.empty()){
                cout << "0\n";
            } else {
                cout << "1\n";
            }
        } else if (cmd == "top"){
            cout << pq.top() << "\n";
        }
    }
    return 0;
}