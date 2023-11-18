#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int k;  cin >> k;
    string s;   cin >> s;
    vector<char> vec;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            vec.push_back(s[i]);
        }
    }
    int index = 0;
    for (int i=0;i<k;i++) {
        if (vec[i] == '0') {
            index = i;
            k=k-i-1;
        }
    }

    char finding = '9';
    while (k > 1) {
        for (int i = index ;i < vec.size() && k > 0; i++) {
            if (vec[i] == finding) {
                vec[i] = 'f';
                k--;
            }
        }
        finding = (char)((int)(finding - 1));
    }
    for (int i = index; i < vec.size(); i++) {
        if (vec[i] >= '0' && vec[i] <= '9')  cout << vec[i];
    }

    return 0;
}