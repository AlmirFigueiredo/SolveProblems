#include <bits/stdc++.h>
using namespace std;
long n;
int main() {
    cin >> n;
    long time = 1;
    long value = 3;
    long pgFactor = 3;
    while(time <= n) {
        value *= 2;
        time += pgFactor;
        pgFactor *= 2;
    }
    if(time == n) {
        cout << value << endl;
    } else {
        time = (time-2)/2;
        value = (value/2)-(n-time);
        cout << value << endl;
    }
    return 0;
}