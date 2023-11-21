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
    long long dem = 0;
    long long max = -1000000001;
    sort(a.begin(), a.end());
    for (int i = 0 ;i < n-2 ; i++) {
        for (int j = i+1; j<n-1;j++) {
            int l = j + 1;
            int r = n - 1;
            int m = (l + r) / 2;
            while (l < r) {
                if (a[j]*2 == a[i]+a[m]) {
                    dem++;
                    if (max < 3*a[j]) {
                        max = 3*a[j];
                    }
                    break;
                }
                else if (a[m]+a[i] < 2*a[j]) {
                    l = m + 1;
                }
                else {
                    r = m - 1;
                }
            }
        }
    }
    cout << dem << endl;
    cout << max;
    return 0;
}