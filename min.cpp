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
    int countZeros = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            vec.push_back(s[i]);
            if (s[i] == '0') countZeros++;
        }
    }
    if (countZeros >= k) {
        for (int i = 0; i < k; i++) {
            cout << 0;
        }
        return 0;
    }

    int index = 0;
    char c = '9';
    while (vec.size() > k) {
        while (index > 0 && vec[index] == '0') {
            index ++;
            c = '9';
        }
        for (int i=index;i<vec.size()>k;) {
            if (vec.size() <= k) break;
            if (vec[i] == '0') {
                c = (char)((int)c - 1);
                break;
            }
            else if (vec[i] != c) {
                i++;
            }
            else if (vec[i] == c) {
                vec.erase(vec.begin() + i);
            }
        }
        if (c == '0') c = '9';
        cout << " ))) ";
    }

    for (int i=0;i<vec.size();i++) {
        cout << vec[i];
    }
    

    return 0;
}