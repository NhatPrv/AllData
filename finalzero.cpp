#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // freopen("CHUSO1.INP", "r", stdin);
    // freopen("CHUSO1.OUT", "w", stdout);

    long long n;    cin >> n;
    long long dem = 0;
    long long x = 5;
    while (x<=n){
        dem+=n/x;
        x*=5;
    }
    
    cout << dem;
    return 0;
}