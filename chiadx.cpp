#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

bool dx(string s, int l, int r) {
    for (int i = l;i < (l+r)/2 ;i++) {
        if (s[i] != s[r - 1 - i+l]) return false;
    }
    return true;
}

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   cin >> s;
    for (int i = s.size()-1; i > 0; i--) {
        if (dx(s, 0, i) && dx(s, i, s.size())) {
            for (int j = 0; j < i; j++) {
                cout << s[j];
            }
            cout << endl;
            for (int j = i;j < s.size(); j++) {
                cout << s[j];
            }
            return 0;
        }
    }
    cout << -1;
    return 0;
}