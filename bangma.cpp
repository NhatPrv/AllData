#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   cin >> s;
    for (int i = 0; i < s.size();) {
        int temp = 0;
        if (s[i] == '1') {
            temp = temp * 10 + (s[i] - '0');
            temp = temp * 10 + (s[i + 1] - '0');
            temp = temp * 10 + (s[i + 2] - '0');
            cout << (char)temp;
            i+=3;
        }
        else {
            temp = temp * 10 + (s[i] - '0');
            temp = temp * 10 + (s[i + 1] - '0');
            cout << (char)temp;
            i+=2;
        }
    }

    return 0;
}