#include <iostream>
#include <vector>

using namespace std;

vector<pair<long long, long long>> findPairs(long long m, long long n) {
    vector<pair<long long, long long>> result;

    for (long long q = 1; q < n; ++q) {
        long long p = (q + n - 1) / n * m - 1;
        if (p < m) {
            result.push_back({p, q});
        }
    }

    return result;
}

int main() {
    long long m, n;
    cin >> m >> n;

    vector<pair<long long, long long>> pairs = findPairs(m, n);
    cout << pairs.size();

    return 0;
}
