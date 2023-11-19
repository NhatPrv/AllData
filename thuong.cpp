#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n == 2 && n == 3) return true;
    for (long long i=2;i*i<=n;i++) {
        if (n%i == 0) return false;
    }
    return true;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    if (isPrime(n)) {
        cout << n;
        return 0;
    }

    long long ans = sqrt(n);
    while (ans > 0) {
        if (n % ans == 0) {
            cout << n/ans << endl;
            return 0;
        }
        ans--;
    }

    return 0;
}