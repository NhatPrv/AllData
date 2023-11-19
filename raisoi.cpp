#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // freopen("RAISOI.INP", "r", stdout);
    // freopen("RAISOI.OUT", "w", stdout);

    int n;  cin >> n;
    vector<long long> a(n+1);
    for (int i=1;i<=n;i++) {
        cin >> a[i];
    }
    long long mx = 0;
    for (int i=1;i<=n;i++) {
        if (a[i] == 0) continue;
        // left --> right
        long long mod = (a[i] + i) % n + 1;
        if (mod == i) continue;
        long long ck = a[mod] + (a[i]) / n; 
        if (ck > mx) mx = ck;
    }
    reverse(a.begin(), a.end());
    for (int i=1;i<=n;i++) {
        if (a[i] == 0) continue;

        long long mod = (a[i] + i) % n + 1;
        if (mod == i) continue;
        long long ck = a[mod] + (a[i]) / n; 
        if (ck > mx) mx = ck;
    }
    cout << mx;

    return 0;
}