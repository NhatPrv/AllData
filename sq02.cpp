#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;cin >> n;
    long long max = -10000000001;
    vector<long long> arr(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        max = max > arr[i] ? max : arr[i];
    }
    for (int i = 0; i < n; i++)  {
        if (sum - arr[i] == arr[i]) {
            cout << arr[i];
            return 0;
        }
    }
    cout << "N";

    return 0;
}