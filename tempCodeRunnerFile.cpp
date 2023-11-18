#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    int dem = 0;
    int len = str1.length();

    for (int i = 0; i < len; ++i) {
        if (str1[i] == str2[len - 1 - i]) {
            dem++;
        }
    }

    cout << dem;

    return 0;
}