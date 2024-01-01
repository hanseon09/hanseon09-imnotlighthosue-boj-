#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[100001];
int a[100001];
map<int,vector<int>> mp;
ll seg1[400001],seg2[400001];
const ll INF=1e18;
int n,nn;


int d(int i,int j){
	if(i==j)return 0;
	if(i>j)return i-j;
	else return n+i-j;
}

ll f(int lef,int rig,int x,int y,int lev){
	if(x>rig || lef>y || x>y)return INF;
	if(x<=lef && rig<=y)return seg1[lev];
	int mid=lef+rig>>1;
	return min(f(lef,mid,x,y,lev*2),f(mid+1,rig,x,y,lev*2+1));
}
ll g(int lef,int rig,int x,int y,int lev){
	if(x>rig || lef>y || x>y)return INF;
	if(x<=lef && rig<=y)return seg2[lev];
	int mid=lef+rig>>1;
	return min(g(lef,mid,x,y,lev*2),g(mid+1,rig,x,y,lev*2+1));
}
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	cin>>n;
	for(int i=1 ; i<=n ; i++){
		cin>>a[i];
		mp[a[i]].push_back(i);
	}
	for(nn=1 ; nn<n ; nn*=2);
	for(int i=1 ; i<2*nn ; i++)seg1[i]=seg2[i]=INF;

	for(int i=nn ; i>=1 ; i>>=1){
		seg1[i]=-1;
		seg2[i]=1;
	}

	vector<int> p={1};
	ll ans=INF;
	for(auto k: mp){
		vector<int> v=k.second;
		int m=v.size();
		ans=INF;
		for(int i=0 ; i<m ; i++){
			int x=v[i];
			int l=v[(i-1+m)%m];
			int r=v[(i+1)%m];
			dp[x]=INF;
			dp[x]=min(dp[x],f(1,nn,1,l,1)+l+d(l,x));
			dp[x]=min(dp[x],f(1,nn,l,n,1)+n+l+d(l,x));

			dp[x]=min(dp[x],f(1,nn,1,r,1)+r+d(x,r));
			dp[x]=min(dp[x],f(1,nn,r,n,1)+n+r+d(x,r));



			dp[x]=min(dp[x],g(1,nn,1,r,1)+n-r+d(x,r));
			dp[x]=min(dp[x],g(1,nn,r,n,1)-r+d(x,r));

			dp[x]=min(dp[x],g(1,nn,1,l,1)+n-l+d(l,x));
			dp[x]=min(dp[x],g(1,nn,l,n,1)-l+d(l,x));
			ans=min(ans,dp[x]);
		}
		for(auto x: p){
			for(int i=nn+x-1 ; i>=1; i>>=1)seg1[i]=seg2[i]=INF;
		}
		p.clear();
		for(int i=0 ; i<m ; i++){
			int x=v[i];
			p.push_back(x);
			for(int j=nn+x-1 ; j>=1 ; j>>=1){
				seg1[j]=min(seg1[j],dp[x]-x);
				seg2[j]=min(seg2[j],dp[x]+x);
			}
		}
	}

	cout<<ans;


}