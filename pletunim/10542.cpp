#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> visited;
vector<vector<int>> v;

int dfs(int node, int x) {
    visited[node] = 1;
    for (int i=0; i<v[node].size(); i++) {
        if (visited[v[node][i]])    continue;
        return dfs(v[node][i], x+1);
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);
    int n;
    int a[500005];
    int cnt[500005];
    int ans = 0;
    memset(cnt, 0, sizeof(cnt));
    cin >> n;
    
    v = vector<vector<int>>(n+1);
    visited = vector<int>(n+1, 0);
    
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        if (a[i] < i && a[a[i]] == i) {	// 서로가 서로를 지목한 경우;
            continue;
        }
        v[i].push_back(a[i]);
        v[a[i]].push_back(i);
        cnt[a[i]]++;	// 연결된 간선 개수
        cnt[i]++;
    }
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (int i=1; i<=n; i++) {
        pq.push({cnt[i], i});
    }
    
    while (!pq.empty()) {
        int sz = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if (visited[node])  continue;
        if (sz>1)  break;
        
        ans++;
        visited[node] = 1;
        for (int i=0; i<v[node].size(); i++) {
            int nnode = v[node][i];
            if (visited[nnode]) continue;
            visited[nnode] = 1;
            for (int j=0; j<v[nnode].size(); j++) {
                if (visited[v[nnode][j]])   continue;
                cnt[v[nnode][j]]--;
                pq.push({cnt[v[nnode][j]], v[nnode][j]});
            }
        }
    }
    
    for (int i=0; i<n; i++) {
        if (visited[i]) continue;
        ans += dfs(i, 1) / 2;
    }
    
    cout << ans;
}