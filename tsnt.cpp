#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

long long sumOfExponents(long long n) {
    long long result = 0;
    if (n == 1) return result;
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            long long exponent = 0;
            while (n % i == 0) {
                n /= i;
                exponent++;
            }
            result += exponent;
        }
    }

    if (n > 1) {
        result += 1;
    }

    return result;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;
    vector<long long> a(n);
    long long mx = 1;
    long long sumExponent = 0;
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        sumExponent += sumOfExponents(a[i]);
        mx = max(mx, sumOfExponents(a[i]));
    }
    cout << sumExponent - mx;

    return 0;
}