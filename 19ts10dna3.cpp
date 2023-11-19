#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;
    long long small = (n*(n-1))+1;
    long long big = (n*(n+1))+1;
    long long ans = big*small;
    if (n == 1) {
        cout << 3; return 0;
    }
    ans -= 1;
    long long l = 0, r = 10000000001;
    long long m;
    while (l<r) {
        m = (r+l)/2;
        if (ans == m*(m-1)) {
            cout << m;
            return 0;
        }
        else if (ans > m*(m-1)) l = m+1;
        else r = m-1;
    }
    cout << m;
    return 0;
}
