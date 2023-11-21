#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<int>());

    long long dem = 0;
    long long maxVal = -1000000001;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            int target = 2 * a[j] - a[i];
            int k = lower_bound(a.begin(), a.end(), target, greater<int>()) - a.begin();
            
            if (k < n && a[k] == target) {
                dem++;
                maxVal = max(maxVal, 3LL * a[j]);
            }
        }
    }

    cout << dem << "\n";
    cout << maxVal << "\n";

    return 0;
}