#include<iostream>
#include<vector>
#include<cstring>
#include<array>
#include<queue>
using namespace std;

const int INF = 1e9;
const int MAX = 110;
int N, M, N_sum, M_sum, cnt;
array<array<int, MAX>, MAX> E, flow;
array<int, MAX> P;
vector<int> V[MAX];
int S = 101, T = 102;

void BFS() {
    queue<int> Q;
    Q.push(S);
    while (!Q.empty()) {
        int now = Q.front(); Q.pop();swwwwww
        for (int next : V[now]) {
            if (E[now][next] - flow[now][next] > 0 && !P[next]) {
                P[next] = now;
                Q.push(next);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        cin >> E[S][i]; V[S].push_back(i);
        N_sum += E[S][i];
    }
    for (int i = 51; i <= M + 50; i++) {
        cin >> E[i][T]; V[i].push_back(T);
        M_sum += E[i][T];
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 51; j <= M + 50; j++) {
            E[i][j] = 1;
            V[i].push_back(j); V[j].push_back(i);
        }
    }
    while (true) {
        fill(P.begin(), P.end(), 0);
        BFS();
        if (!P[T]) break; cnt++;
        for (int i = T; i != S; i = P[i]) {
            flow[P[i]][i]++;
            flow[i][P[i]]--;
        }
    }
    if (N_sum == M_sum && cnt == N_sum) {
        for (int i = 1; i <= N; i++) {
            for (int j = 51; j <= M + 50; j++) {
                if (flow[i][j]) {
                    fill(P.begin(), P.end(), 0);
                    P[i] = j; BFS();
                    if (!P[j]) continue;
                    flow[P[j]][j]++;
                    flow[j][P[j]]--;
                    for (int k = P[j]; k != j; k = P[k]) {
                        flow[P[k]][k]++;
                        flow[k][P[k]]--;
                    }
                }
                E[i][j] = 0;
            }
        }
        for (int i = 1; i <= N; i++) {
            for (int j = 51; j <= M + 50; j++) cout << flow[i][j];
            cout << "\n";
        }
    }
    else cout << "-1\n";
    return 0;
}
