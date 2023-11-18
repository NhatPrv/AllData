#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t;   cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        ll temp = (k-1)/(n-1) + k;
        if (temp %  n == 0) temp++;
        cout << temp << "\n";
    }

    return 0;
}