#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
long long m;
int n, s, a[1000], dp[10000];
int main() {
    scanf("%lld%d", &m, &n);
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    s = *max_element(a, a + n);
    for (int i = 1; i < s; i++) dp[i] = 1e9;
    priority_queue<pair<int, int> > pq;
    pq.push({ 0,0 });
    while (!pq.empty()) {
        int tdis = -pq.top().first, tpos = pq.top().second;
        pq.pop();
        if (dp[tpos] ^ tdis) continue;
        for (int i = 0; i < n; i++) {
            int t = tpos + a[i];
            if (dp[t%s] > tdis + 1 - t / s) {
                dp[t%s] = tdis + 1 - t / s;
                pq.push({ -dp[t%s],t%s });
            }
        }
    }
    printf("%lld", dp[m%s] + m / s);
    return 0;
}