#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

typedef long long ll;
typedef pair<ll, ll> p;

int n;
p arr[201010];

int ccw(p a, p b, p c){
    ll res = a.x*b.y + b.x*c.y + c.x*a.y;
    res -= b.x*a.y + c.x*b.y + a.x*c.y;
    if(res > 0) return 1;
    if(res) return -1;
    return 0;
}
inline int ccw(int a, int b, int c){ return ccw(arr[a], arr[b], arr[c]); }

vector<int> go(int s, int e){
    if(s == e) return vector<int>(s, 0);
    if(s+1 == e) return {s, e};
    vector<int> ret;
    if(s == 0){
        ret = go(e, n);
        ret.back() -= n;
        return ret;
    }
    ret.push_back(s);
    for(int i=s+1; i<=e; i++){
        while(ret.size() >= 2 && ccw(ret[ret.size()-2], ret.back(), i) >= 0) ret.pop_back();
        ret.push_back(i);
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++) cin >> arr[i].x >> arr[i].y; arr[n] = arr[0];
    int st, ed; cin >> st >> ed;
    auto ans = go(min(st, ed), max(st, ed));
    if(ans[0] == ed) reverse(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for(auto i : ans) cout << i << " ";
}