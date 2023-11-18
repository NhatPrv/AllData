#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x, y;
    cin >> x >> y;
    long long area = x * y;
    long long minL = __gcd(x, y);
    cout << area / (minL * minL);

    return 0;
}