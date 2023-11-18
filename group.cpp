#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    freopen("GROUP.INP", "r", stdin);
    freopen("GROUP.OUT", "w", stdout);

    int t;  cin >> t;
    while (t--)  {
        int n;  cin >> n;
        int k;  cin >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)  {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int ans = 1;
        for (int i = 1; i < n; i++)  {
            if (a[i] - a[i - 1] > k)  {
                ans++;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}