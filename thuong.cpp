#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    long long l = 1;
    long long r = 1;
    long long sum = 0;
    for (r;r<=n;r+=2) {
        sum += r;
        if (sum > n) {
            while (sum > n) {
                sum -= l;
                l += 2;
            }
        }
        else if (sum == n) {
            cout << (l+r)/2;
            return 0;
        }
    }

    return 0;
}