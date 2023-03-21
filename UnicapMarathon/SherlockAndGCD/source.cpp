#include <bits/stdc++.h>
using namespace std;
int T, N, temp;
int main() {
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N;
        cin >> temp;
        int gcd = temp;
        for(int j = 0; j < N-1; j++) {
            cin >> temp;
            gcd = __gcd(gcd, temp);   
        }
        if(gcd == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
}
