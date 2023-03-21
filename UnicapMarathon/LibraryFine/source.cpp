#include <bits/stdc++.h>
using namespace std;
int d, d2, m, m2, y, y2;
int main() {
    cin >> d;
    cin >> m;
    cin >> y;
    cin >> d2;
    cin >> m2;
    cin >> y2;
    if(d <= d2 && m <= m2 && y <= y2 || (y<y2) || (y==y2 && m<m2)) {
        cout << 0 << endl;
    }else if(y==y2 && m2==m) {
        cout << 15*(d-d2) << endl;
    } else if(y==y2) {
        cout << 500*(m-m2) << endl;
    } else {
        cout << 10000 << endl;
    }
}