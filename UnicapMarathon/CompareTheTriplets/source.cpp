#include <bits/stdc++.h>
using namespace std;
int a[3];
int b[3];
int main() {
    for(int i = 0; i < 6; i++) {
        if(i < 3) {
            cin >> a[i];
        } else {
            cin >> b[i%3];
        }
    }
    int resultA = 0;
    int resultB = 0;
    for(int i = 0; i < 3; i++) {
        if(a[i] > b[i]) {
            resultA += 1;
        } else if(a[i] < b[i]) {
            resultB += 1;
        } else {
            continue;
        }
    }
    cout << resultA << " " << resultB;
    return 0;
}