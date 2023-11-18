#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, k;
    cin >> n >> k;
    vector<long long> a(k);
    for (int i=0;i<k;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long ans = 0;
    if (k == 1) {
        ans += a[0]-1
        ans += (n-1)
    }
    return 0;
}