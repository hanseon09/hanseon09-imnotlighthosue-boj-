#define MAX 9876543210
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
struct info{
    int idx,cnt,val;
};
struct cmp{
    bool operator()(info &a, info &b){
        return a.val > b.val;
    }
};
info tmp;
int node,edge,s,e,tax,start,target,mul,val,sum=0;
vector<info> v[1001];
int dist[1001][1001];     //각 지점, 몇 번 거쳤는지

void cal(){
    int result = MAX;
    for(int i=1;i<node;i++){
        int vv = dist[target][i]+i*sum;
        result = min(result,vv);
    }
    cout<<result<<'\n';
}

void dijkstra(){
    priority_queue<info,vector<info>,cmp> pq;
    pq.push({start,0,0});
    dist[start][0]=0;
    while(!pq.empty()){
        int cidx = pq.top().idx;
        int cc = pq.top().cnt;
        int cv = pq.top().val;
        pq.pop();
        if(dist[cidx][cc]<cv) continue;
        for(int i=0;i<v[cidx].size();i++){
            int next = v[cidx][i].idx;
            int nv = v[cidx][i].val;
            if(dist[next][cc+1]>cv+nv){
                dist[next][cc+1]=cv+nv;
                pq.push({next,cc+1,cv+nv});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>node>>edge>>tax>>start>>target;
    for(int i=1;i<=node;i++)
        for(int j=0;j<node;j++)
            dist[i][j]=MAX;
    for(int i=0;i<edge;i++){
        cin>>s>>e>>val;
        v[s].push_back({e,0,val});
        v[e].push_back({s,0,val});
    }
    dijkstra();
    cal();
    for(int i=0;i<tax;i++){
        cin>>mul;
        sum+=mul;
        cal();
    }
    return 0;
}