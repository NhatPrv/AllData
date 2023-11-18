#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// ý tưởng của anh zai GPT
// recode by #CodeCrafters_Nholl (danglongnhat)
// đừng ban em :)

int main ()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b;   cin >> a >> b;
    long long n;    cin >> n;
    long long result = 0;
    vector<int> remis;
    unordered_map<int, int> remiIndex;
    int remi = a % b;
    int pos = 0;
    while (remi != 0 && remiIndex.find(remi) == remiIndex.end()) {
        remiIndex[remi] = pos;
        remis.push_back(remi * 10);
        remi = remis[pos] % b;
        pos++;
    }

    if (remi != 0) {
        int againStartIndex = remiIndex[remi];
        int againLength = pos - againStartIndex;
        int targetIndex = (n - againStartIndex - 1) % againLength + againStartIndex;
        result = remis[targetIndex] / b;
    }   else {
        result = remis[n-1] / b;
    }
    cout << result;

    return 0;
}
