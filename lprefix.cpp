#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;  cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    vector<char> maxSub;
    for (int i=0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            vector<char> check;
            for (int k = 0; k < s[i].size() && k < s[j].size(); k++) {
                if (s[i][k] == s[j][k]) {
                    check.push_back(s[i][k]);
                }
                else {
                    break;
                }
            }
            if (maxSub.size() < check.size()) {
                maxSub = check;
            }
            else if (maxSub.size() == check.size()) {
                for (int x = 0; x < maxSub.size(); x++) {
                    if (maxSub[x] > check[j]) {
                        maxSub = check;
                        break;
                    }
                }
            }
        }
    }
    for (char c: maxSub) cout << c;


    return 0;
}