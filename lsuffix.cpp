#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;

// code by #CodeCrafters_Nholl (danglongnhat)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    vector<int> arr(N);
    unordered_map<int, int> count;

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
        count[arr[i]]++;
    }

    long long maxSum = 0;
    long long totalCount = 0;

    // Duyệt qua tất cả các bộ tam hợp có thể
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int third = 2 * arr[j] - arr[i];
            
            // Kiểm tra xem third có trong dãy không và third không trùng với i và j
            if (count.find(third) != count.end() && third != arr[i] && third != arr[j]) {
                long long currentSum = arr[i] + arr[j] + third;
                long long currentCount = 1LL * count[arr[i]] * count[arr[j]] * count[third];

                // Cập nhật kết quả nếu tìm được bộ tam hợp mới có tổng lớn hơn
                if (currentSum > maxSum || (currentSum == maxSum && currentCount > totalCount)) {
                    maxSum = currentSum;
                    totalCount = currentCount;
                }
            }
        }
    }

    // In kết quả
    cout << totalCount << "\n";
    cout << maxSum << "\n";

    return 0;
}