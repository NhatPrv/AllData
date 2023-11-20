#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;  cin >> t;
    while (t--) {
        long long n;    cin >> n;
        if (n < 10) {
            cout << 1 << n << endl;
            continue;
        }
        vector<long long> ans;
        for (long long i = 9; i > 1; i--) {
            while (n > 1 && n % i == 0) {
                ans.push_back(i);
                n/=i;
            }
            
        }    
        if (n > 1) {
            cout << -1 << endl;
            continue;
        }
        for (int i=ans.size()-1;i>=0;i--) {
            cout << ans[i];
        }   
        cout << endl;
        
    }
    return 0;
}