#include <cstdio>
#include <cstring>
#define INF 987654321

inline int min(int a, int b) { return a < b ? a : b; }

int N, M;

int dp[10001][101];

int solve(int x, int y) {

    if (x == y) return dp[x][y] = 1;

    if (x < 0 || y < 0) return INF;

    int &ret = dp[x][y];

    if (ret != -1) return ret;

    ret = x*y;
    if (x >= 4 * y) ret = min(ret, solve(x - y, y) + 1);

    else {

        for (int ny = 1;ny <= (y + 1) / 2;ny++)

            ret = min(ret, solve(x, ny) + solve(x, y - ny));

        for (int nx = 1; nx <= (x + 1) / 2;nx++)

            ret = min(ret, solve(nx, y) + solve(x - nx, y));

    }

    return ret;

}

int main(void)
{
        memset(dp, -1, sizeof dp);
        scanf("%d %d", &N, &M);
        printf("%d\n", solve(N, M));
        return 0;
}
    