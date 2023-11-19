#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string findLongestPrefix(const vector<string>& strings) {
    int n = strings.size();
    if (n == 0) {
        return "";
    }

    sort(strings.begin(), strings.end());

    string longestPrefix = "";
    for (int i = 1; i < n; ++i) {
        int len = min(strings[i - 1].length(), strings[i].length());
        string commonPrefix = "";
        for (int j = 0; j < len; ++j) {
            if (strings[i - 1][j] == strings[i][j]) {
                commonPrefix += strings[i - 1][j];
            } else {
                break;
            }
        }
        longestPrefix = max(longestPrefix, commonPrefix);
    }

    return longestPrefix;
}

int main() {
    int n;
    cin >> n;
    vector<string> strings(n);

    for (int i = 0; i < n; ++i) {
        cin >> strings[i];
    }

    string result = findLongestPrefix(strings);

    cout << result << endl;

    return 0;
}
