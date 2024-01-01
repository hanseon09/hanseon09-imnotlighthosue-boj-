#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 100000;

int a, b, N, pw = 1, p = -1, pv[4200005];

void dfs(int x) {
    while (pv[x] != a) {
        N = 1LL * x * a % pw + pv[x];
        pv[x]++;
        dfs(N);
    }
    if (p != -1) cout << p << ' ';
    p = x % a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> a >> b;
    if (b-- == 1) {
        for (int i = 0; i < a; i++) cout << i << ' ';
        return 0;
    }
    for (int i = 1; i <= b; i++) pw *= a;
    dfs(0);
    return 0;
}