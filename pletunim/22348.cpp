#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX=30;
ll MOD=1e9+7;
vector<ll>ch[502];
ll dp[502][50002];
vector<ll>st;
ll min(ll a,ll b){
    if(a>b)return b;
    else return a;
}

int main(){
    st.push_back(0);
    ll cnt=0;
    for(int i=0;i<500;i++)st.push_back(st[i]+i+1);
    for(int i=1;i<501;i++){
        ll Q=min(50000,st[i])+1;
        ch[i].push_back(0);
        for(int g=0;g<Q;g++){
            if(i==1)dp[i][g]=1;
            else{
                dp[i][g]=dp[i-1][g];
                if(g>=i)dp[i][g]+=dp[i-1][g-i];
            }
            ch[i].push_back(ch[i][g]+dp[i][g]);
            dp[i][g]%=MOD;
        }
    }
    ll a,b,c;
    scanf("%lld",&a);
    for(int W=0;W<a;W++){
        scanf("%lld %lld",&b,&c);//빨,파
        ll i=1,ans=0;
        while(b+c>=st[i]){
            ll z=min(st[i],c)+1;
            if(z==st[i]-b)break;
            ans+=ch[i][z];
            if(st[i]>b){
                if(ch[i][st[i]-b+1]==0)break;
                ans-=ch[i][st[i]-b];
            }
            i++;
            ans%=MOD;
        }
        printf("%lld\n",ans%MOD);
    }
}