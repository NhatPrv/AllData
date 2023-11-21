#pragma GCC optimize("03,unroll-loops")
#include <iostream>
#include <vector>
#include <algorithm>

//  code by #CodeCrafters_Nholl (danglongnhat)

size_t commonSuffix(const std::string& str1, const std::string& str2) {
    size_t len1 = str1.length();
    size_t len2 = str2.length();
    size_t i = 0;

    while (i < len1 && i < len2 && str1[len1-1-i] == str2[len2-1-i]) {
        i++;
    }
    return i;
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;  std::cin >> n;
    std::vector<std::string> s(n);
    for (auto &i : s) std::cin >> i;

    std::string maxSub = "";
    for (size_t i = 0; i < n-1; i++) {
        for (size_t j = i+1; j < n; j++) {
            size_t commonLen = commonSuffix(s[i], s[j]);
            if (commonLen > maxSub.size() || (commonLen == maxSub.size() && s[i].substr(s[i].size() - commonLen) < maxSub)) {
                maxSub = s[i].substr(s[i].size() - commonLen);
            }
        }
    }
    std::cout << maxSub;

}