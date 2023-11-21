#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

bool nto(long long n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    for (int i = 2;i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    for (int i = n+1;; i++) {
        if (nto(i)) {
            cout << i << endl;
            return 0;
        }

    }

    return 0;
}