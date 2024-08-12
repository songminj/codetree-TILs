#include <iostream>
#include <vector>
using namespace std;

int binary_search(int* target, vector<int>* v){
    int l = 0, r= v->size() -1;
    while (l <= r){
        int mid = (l+r)/2;
        if ((*v)[mid] == *target){
            return mid+1;
        }

        if((*v)[mid] > *target){
            r = mid -1;
        } else {
            l = mid+1;
        }
    }
    return -1;
}

int n, m, p;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < m; i++){
        cin >> p;
        cout << binary_search(&p, &v) << endl;
    }
    return 0;
}