#include <bits/stdc++.h>
using namespace std;
long n;
int main() {
    cin >> n;
    long init = 1;
    long value = 3;
    long pgFactor = 3;
    while(init <= n) {
        value *= 2;
        init += pgFactor;
        pgFactor *= 2;
    }
    if(init == n) {
        cout << value << endl;
    } else {
        init -= 2;
        init /= 2;
        value /= 2;
        value -= (n-init);
        cout << value << endl;
    }
    return 0;
}