#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int count = 1; // Khởi tạo biến đếm với giá trị 1 vì chúng ta đã đếm dãy con bắt đầu từ ký tự đầu tiên

    for (int i = 1; i < n; i++) {
        if (s[i] >= s[i - 1]) {
            count++;
        } else {
            count = 1; // Đặt lại biến đếm nếu gặp ký tự giảm
        }
    }

    cout << count;

    return 0;
}
