#pragma GCC optimize("03,unroll-loops")
#include <iostream>

//  code by #CodeCrafters_Nholl (danglongnhat)

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    long long m, n;
    std::cin >> m >> n;
    freopen("PHANSO.inp", "r", stdin);
    freopen("PHANSO.out", "w", stdout);

    int count = 0;
    
    for (long long p = 1; p < m; ++p) {
        for (long long q = 1; q < n; ++q) {
            if ((m + p) % (n + q) == 0) {
                count++;
            }
        }
    }
    std::cout << count << std::endl;

    return 0;
}
