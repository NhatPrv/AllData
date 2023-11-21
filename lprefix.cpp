#pragma GCC optimize("O3,unroll-loops")
#include <iostream>
#include <vector>
#include <algorithm>

//  code by #CodeCrafters_Nholl (danglongnhat)

size_t commonPrefix(const std::string& str1, const std::string& str2) {
    size_t len1 = str1.size();
    size_t len2 = str2.size();
    size_t i = 0;

    while (i < len1 && i < len2 && str1[i] == str2[i]) {
        i++;
    }

    return i;
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);

    int n;  
    std::cin >> n;
    std::vector<std::string> s(n);

    for (auto& str : s) {
        std::cin >> str;
    }

    std::string maxSub = "";

    for (size_t i = 0; i < n-1; i++) {
        for (size_t j = i+1; j < n; j++) {
            size_t commonLen = commonPrefix(s[i], s[j]);
            
            if (commonLen > maxSub.size() || (commonLen == maxSub.size() && s[i] < maxSub)) {
                maxSub = s[i].substr(0, commonLen);
            }
        }
    }

    std::cout << maxSub << std::endl;

    return 0;
}
