#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct seg{
   ll mx,mn,sum;
};
ll n,q,lazy[1<<20],sqlazy[1<<20];
seg tree[1<<20];
seg cmp(seg a,seg b) {
   return {max(a.mx,b.mx),min(a.mn,b.mn),a.sum+b.sum};
}
void propa(ll node,ll s,ll e) {
   if(!lazy[node]&&!sqlazy[node]) return;
   if(!sqlazy[node]) {
      tree[node].sum+=(e-s+1)*lazy[node];
      tree[node].mx+=lazy[node];
      tree[node].mn+=lazy[node];
      if(s!=e) {
         lazy[node*2]+=lazy[node];
         lazy[node*2+1]+=lazy[node];
      }
   }
   else {
      tree[node].sum=(e-s+1)*(lazy[node]+sqlazy[node]);
      tree[node].mx=tree[node].mn=lazy[node]+sqlazy[node];
      if(s!=e) {
         lazy[node*2]=lazy[node];
         lazy[node*2+1]=lazy[node];
         sqlazy[node*2]=sqlazy[node];
         sqlazy[node*2+1]=sqlazy[node];
      }
   }
   lazy[node]=sqlazy[node]=0;
}
void update(ll node,ll s,ll e,ll l,ll r,ll val) {
   propa(node,s,e);
   if(r<s||e<l) return;
   if(l<=s&&e<=r) {
      lazy[node]=val;
      propa(node,s,e);
      return;
   }
   update(node*2,s,(s+e)/2,l,r,val);
   update(node*2+1,(s+e)/2+1,e,l,r,val);
   tree[node]=cmp(tree[node*2],tree[node*2+1]);
}
ll query(ll node,ll s,ll e,ll l,ll r) {
   propa(node,s,e);
   if(r<s||e<l) return 0;
   if(l<=s&&e<=r) return tree[node].sum;
   return query(node*2,s,(s+e)/2,l,r)+query(node*2+1,(s+e)/2+1,e,l,r);
}
void sq(ll node,ll s,ll e,ll l,ll r) {
   propa(node,s,e);
   if(r<s||e<l) return;
   if(l<=s&&e<=r) {
      if(floor(sqrt(tree[node].mx))==floor(sqrt(tree[node].mn))) {
         sqlazy[node]=floor(sqrt(tree[node].mx));
         propa(node,s,e);
         return;
      }
      if(tree[node].mn+1==tree[node].mx) {
         lazy[node]=floor(sqrt(tree[node].mn))-tree[node].mn;
         propa(node,s,e);
         return;
      }
   }
   sq(node*2,s,(s+e)/2,l,r);
   sq(node*2+1,(s+e)/2+1,e,l,r);
   tree[node]=cmp(tree[node*2],tree[node*2+1]);
}
int main() {
   cin.tie(0),cout.tie(0),ios::sync_with_stdio(false);
   cin>>n;
   for(int i=1;i<=n;i++) {
      ll k;
      cin>>k;
      update(1,1,n,i,i,k);
   }
   cin>>q;
   while(q--) {
      ll s,l,r,x;
      cin>>s>>l>>r;
      if(s==1) {
         cin>>x;
         update(1,1,n,l,r,x); 
      }  
      if(s==2) sq(1,1,n,l,r);
      if(s==3) cout<<query(1,1,n,l,r)<<"\n";
   }
}

