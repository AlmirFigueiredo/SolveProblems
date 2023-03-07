#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    if(a == b || a == c || b == c || a+b == c || a+c == b || b+c == a || a+b == c || a+c == b || b+c == a) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }
}