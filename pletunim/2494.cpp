#include <cstdio>
#include <algorithm>

using namespace std;

struct T {
    int x, y, m;
};

char from[10004];
char to[10004];
int dp[10004][11], N;
T child[10004][11];

int dpf(int n, int turn) {
    int &ret = dp[n][turn];
    if (n == N) return 0;
    if (ret) return ret;

    int l = (to[n] - from[n] - turn + 20) % 10;
    int r = 10 - l;

    int turnLeft = dpf(n + 1, (turn + l) % 10) + l;
    int turnRight = dpf(n + 1, turn) + r;

    T &baby = child[n][turn];
    if (turnLeft < turnRight) baby = {n + 1, (turn + l) % 10, l};
    else baby = {n + 1, turn, -r};
    return ret = min(turnLeft, turnRight);
}

int main() {
    scanf("%d", &N);
    scanf("%s", from);
    scanf("%s", to);
    for (int i = 0; i < N; i++) {
        from[i] -= '0';
        to[i] -= '0';
    }
    printf("%d\n", dpf(0, 0));
    
    int n = 0, turn = 0;
    for (int i = 1; i <= N; i++) {
        T &cur = child[n][turn];
        printf("%d %d\n", i, cur.m);
        n = cur.x;
        turn = cur.y;
    }
 }