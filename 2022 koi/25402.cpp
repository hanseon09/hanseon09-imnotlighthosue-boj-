#include <bits/stdc++.h>

using namespace std;

const int MAX = 250001;

int N, Q;
int p[MAX], tp[MAX];
vector<int> kv;
vector<vector<int>> adj;
bool chk[MAX], visited[MAX];

int find(int n) {
    if (p[n] < 0) return n;
    return p[n] = find(p[n]);
}

void Union(int n1, int n2) {
    n1 = find(n1);
    n2 = find(n2);
    if (n1 == n2) return;
    p[n1] += p[n2];
    p[n2] = n1;
}

void dfs(int cur) {
    visited[cur] = true;
    for (auto& next : adj[cur]) {
        if (visited[next]) continue;
        tp[next] = cur;
        dfs(next);
    }
}

long long solve() {
    long long ans = 0;
    for (auto x : kv) {
        if (chk[x] && chk[tp[x]]) Union(x, tp[x]);
    }

    for (auto x : kv) {
        if (p[x] < -1) {
            ans += 1LL*(-p[x])*(-p[x]-1)/2;
        }
    }

    for (auto x : kv) {
        chk[x] = false;
        p[x] = -1;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    adj.resize(N+1);
    for (int i = 0; i < N-1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);
    memset(p, -1, sizeof(p));

    cin >> Q;
    while (Q--) {
        int K;
        cin >> K;
        kv.clear();
        while (K--) {
            int x;
            cin >> x;
            kv.push_back(x);
            chk[x] = true;
        }
        cout << solve() << '\n';
    }

    return 0;
}