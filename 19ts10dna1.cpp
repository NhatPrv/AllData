#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;    cin >> n;

    long long uoc = 1;;
    for (long long i = 2;i < n;i++) {
        if (n % i == 0) {
            uoc = i;
            break;
        }
    }
    long long demuoc;
    for (int i=2;i*i<=n;i++) {
        if (i*i==n) n--;
        if (n % i == 0) demuoc+=2;
    }
    long long dist = n/uoc;
    cout << n - dist;
    
    return 0;
}