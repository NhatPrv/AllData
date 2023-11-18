#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

bool kiemtradoixung(string s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - 1 - i]) {
            return false;
        }
    }
    return true;
}


int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    freopen("XKT.inp", "r", stdin);
    freopen("XKT.out", "w", stdout);

    string s;   cin >> s;
    for (int i=1;i<s.size();i++) {
        string str = s.substr(i, s.size()) + s.substr(0, i);
        if (kiemtradoixung(str)) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}