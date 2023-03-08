#include <bits/stdc++.h>
using namespace std;


int getGCD(int a, int b) {
    if(a == 0) {
        return b;
    }
    if(b == 0) {
        return a;
    }
    if(a == b) {
        return b;
    }
    if(a > b) {
        return getGCD(a-b, b);
    }
    return getGCD(a, b-a);
}
int main() {
    int T;
    cin >> T;
    for(int k = 0; k < T; k++) {
        int quantityOfRocks = 0;
        int x1, x2, y1, y2;
        cin >> x1;
        cin >> y1;
        cin >> x2;
        cin >> y2;
        quantityOfRocks = getGCD(abs(x1-x2), abs(y1-y2))-1;
        cout << quantityOfRocks << endl;
    }
    return 0;
}