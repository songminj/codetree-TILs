#include <iostream>
#include <set>
using namespace std;

int T, K, N;
string cmd;
int main() {
    cin >> T;
    for (int i = 0; i < T; i++){
        set<int> s;
        cin >> K;
        for (int j = 0; j < K; j++){
            cin >> cmd;
            if (cmd == "I") {
                cin >> N;
                s.insert(N);
            } else {
                cin >> N;
                if (s.rbegin() != s.rend()) {
                    if (N == 1){
                        s.erase(*s.rbegin());
                    } else {
                        s.erase(*s.begin());
                    }
                }
            }
        }
        if (s.rbegin() != s.rend()){
            cout << *s.rbegin() << " " << *s.begin() << endl;
        } else {
            cout << "EMPTY\n"; 
        }

    }
    return 0;
}