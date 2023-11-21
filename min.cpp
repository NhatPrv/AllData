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
    int l = 0, r = -1;
    char c = '9';
    while (l < vec.size() && vec.size() > k) {
        if (c != '0') c = (char)((int)c - 1);
        else c = '9';
        l = r+1;  r = vec.size();
        for (int i = l; i < vec.size(); i++) {
            if (vec[i] == '0') {
                r = i;
                break;
            }
        }
        while (vec.size() > k && c != '0') {  
            for (int i = l; i < r && vec.size() > k;) {
                if (vec[i] == '0') {
                    break;
                }
                else if (vec[i] == c) {
                    vec.erase(vec.begin() + i);
                }
                else i++;
            }
            c = (char)((int)c - 1);
        }
    }
    for (char c : vec) cout << c;
    return 0;
}