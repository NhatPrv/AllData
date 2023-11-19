#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

long long mod = 1000000007;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i=0;i<n;i++) cin >> a[i];
    long long ans = 0;
    for (long long i = 0; i < n-2; i++) {
        for (long long j = i+1; j < n-1; j++) {
            for (long long k = j+1; k < n; k++) {
                ans += (a[i] * a[j] - 2*a[k]);
                ans %= mod;
            }
        }
    }
    if (ans < 0) ans+=mod;
    cout << ans;
    return 0;
}