#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    int dp[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int len = 0;
    for (int i = 0; i < n; i++) {
        int pos = lower_bound(dp, dp + len, a[i]) - dp;
        dp[pos] = a[i];
        if (pos == len) {
            len++;
        }
    }

    cout << len << endl;

    return 0;
}
