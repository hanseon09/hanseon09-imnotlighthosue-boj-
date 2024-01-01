#include <cstdio>
#include <queue>
 
using namespace std;
 
vector<int> vc[32001];
int line[32001];
 
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
 
    for (int i = 0; i < m; i++)
    {
        int cur, prev;

        scanf("%d %d", &prev, &cur);
 
        line[cur]++;
        vc[prev].push_back(cur);
    }
 
    int result[32001];
    queue<int> q;
 
    for (int i = 1; i <= n; i++)
        if (line[i] == 0)
            q.push(i);
 
    for (int i = 0; i < n; i++)
    {
        if (q.empty())
        {
            printf("0");
            return 0;
        }
 
        int cur = q.front();
        q.pop();
 
        result[i] = cur;
 
        for(int j = 0 ; j < vc[cur].size(); j++)
        {
            int next = vc[cur][j];
            if (--line[next] == 0)
                q.push(next);
        }
        
    }
        for (int i = 0; i < n; i++)
            printf("%d ", result[i]);
    return 0;
}