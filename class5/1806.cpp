#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> sequence(n);
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    int left = 0, right = 0, sum = sequence[0], answer = n + 1;

    while (left <= right && right < n) {
        if (sum < s) {
            right++;
            sum += sequence[right];
        } else {
            answer = min(answer, right - left + 1);
            sum -= sequence[left];
            left++;
        }
    }

    if (answer == n + 1) {
        cout << 0 << endl;
    } else {
        cout << answer << endl;
    }

    return 0;
}
