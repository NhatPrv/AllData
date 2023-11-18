#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;   cin >> s;
    map<char, int> dem;
    for (char c : s) {
        dem[c] ++;
    }
    int count = -1;
    for (auto it : dem) {
        if (it.second % 2 == 1) {
            count++;
        }
    }
    cout << max(0, count);

    return 0;
}