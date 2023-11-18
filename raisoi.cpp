#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<long long> a(n+1);
    for (int i=1;i<=n;i++) {
        cin >> a[i];
    }
    long long mx = 0;
    for (int i=1;i<=n;i++) {
        if (a[i] == 0) continue;
        else  {
            long long mod = a[i]%n;
            if (mod + i > n-1) {
                mod = (mod+i) - n;
                long long cking = a[mod] + a[i]/n;
                mx = max(mx, cking);
            } 
            else {
                long long cking = a[mod+1] + a[i]/n;
                mx = max(mx, cking);
            } 
        }
    }
    cout << mx;


    return 0;
}