#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int n, num;
vector<int> v;
int main() {
    cin >> n;
    int now = 0;
    int ans = INT_MIN;
    v.resize(n, 0);
    for (int i = 0; i < n; i++){
        cin >> num;
        now += num;
        if (ans < now){
            ans = now;
        } 
        if (now < 0) {
            now = 0;
        }
    }
    cout << ans;

    return 0;
}