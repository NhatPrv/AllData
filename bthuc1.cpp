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
    long long ans = 1;
    vector<long long> arr(k);
    for (long long i = 0; i < k; i++) {
        cin >> arr[i];
    }
    if (k == 1) {
        if (n == 1) {
            cout << 1;
            return 0;
        }
        else if (n == 2) {
            cout << 2;
            return 0;
            if ()
        }
    }
    sort(arr.begin(), arr.end());
    for (long long i = 1; i < k; i++) {
        if (arr[i] - arr[i - 1] != 1) ans++;
    }
    cout << ans;

    return 0;
}