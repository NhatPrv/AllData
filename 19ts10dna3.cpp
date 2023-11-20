#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;
    long long small = (n*(n-1))+1;
    long long big = (n*(n+1))+1;
    long long ans = big*small;
    long long tmp;
    tmp = sqrt(ans);
    if ((tmp*(tmp-1)) + 1 == ans) {
        cout << (int)sqrt(ans);
    }
    else cout << (int)sqrt(ans) +1;
    
    cout << ans + 1;
    return 0;
}
