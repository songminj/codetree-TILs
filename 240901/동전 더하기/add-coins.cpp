#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<int> v;
int main() {
    cin >> n >> k;
    int cnt = 0;
    v.resize(n, 0);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int idx = n-1;
    while (k){
        cnt += k / v[idx];
        k = k % v[idx];
        idx--;
    }
    cout << cnt ;
    return 0;
}