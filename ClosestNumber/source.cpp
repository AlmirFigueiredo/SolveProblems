#include <bits/stdc++.h>
using namespace std;
int T, a, b ,x;
int main() {
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> a;
        cin >> b;
        cin >> x;
        int target = pow(a, b);
        int before = floor(target/x)*x;
        int after = (floor(target/x)+1)*x;
        if(abs(target-after) > target-before) {
            cout << before << endl;
        } else {
            cout << after << endl;
        }
    }
}