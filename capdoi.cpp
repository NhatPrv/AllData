#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    int x;    cin >> x;
    long long a[n];
    long s = 0;
    unordered_map<int, int> count;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        count[a[i]]++;
    }
    for (int i=0;i<n;i++) {
        int target = x - a[i];
        if (count.find(target) != count.end()) {
            s += count[target];
            if (target == a[i]) s--;
        }
    }
    cout << s/2;

    return 0;
}
