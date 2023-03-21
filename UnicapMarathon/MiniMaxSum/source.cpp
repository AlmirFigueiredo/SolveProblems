#include <bits/stdc++.h>
using namespace std;
long a[5];
int main() {
    for(int i = 0; i < 5; i++) {
        cin >> a[i];        
    }
    sort(begin(a), end(a));
    cout << (a[0]+a[1]+a[2]+a[3]) <<  " " << (a[1]+a[2]+a[3]+a[4]) << endl;
    return 0;
}

