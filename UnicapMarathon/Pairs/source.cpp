#include <bits/stdc++.h>
using namespace std;
int n, target;

int main() {
    cin >> n >> target;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int k = 0;
    for(int i = n-1; i >= 0; i--) {
        for(int j = 0; j < i; j++) {
            if(a[i]-a[j] == target) {
                k++;
                break;
            }
        }
    }
    cout << k << endl;
    return 0;
}