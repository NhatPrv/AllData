#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    long long dem = 0;
    long long len = str1.length();

    for (long long i = 0; i < len; ++i) {
        if (str1[i] == str2[len - 1 - i]) {
            dem++;
        }
    }

    cout << dem;

    return 0;
}