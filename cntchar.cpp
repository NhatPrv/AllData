#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    map<char, int> count;
    string s;   cin >> s;
    for (int i = 0; i < s.size(); i++) {
        count[s[i]] ++;
    }
    int dem = 0;
    for (auto i : count) {
        if (i.second == 1) dem++;
    }
    cout << dem;

    return 0;
}