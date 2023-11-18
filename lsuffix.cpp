#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    cin.ignore();
    vector<string> a;
    for (int i=0;i<n;i++) {
        getline(cin, a[i]);
    }
    sort(a.begin(), a.end());
    for (int i=0;i<n;i++) {
        cout << a[i] << "\n";
    }

    return 0;
}