#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1000000007;
const int MAX = 222222;

int N; 
ll ans, number[MAX+1], value[MAX+1];
int Li(int x){                
	return x&(-x);			 
}	
ll sum(int i){
	ll temp = 0;
	while(i>0){
		temp += value[i];
		i -= Li(i);
	}
	return temp;
}
int Nsum(int i){
	int nnn = 0;
	while(i>0){
		nnn += number[i];
		i -= Li(i);
	}
	return nnn;
}
void update(int i, int V){
	while(i<=MAX){
		value[i] += V;
		number[i] += 1;
		i += Li(i);
	}
}
int main(){ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; ++i){
		int where;
		cin >> where;
		// 펙윅은 0 처리를 못하니 좌표를 그냥 +1 해주었습니다.
		where++;
		ll leftcnt = Nsum(where-1);
		ll rightcnt = Nsum(MAX)-Nsum(where);
		ll leftVal = sum(where-1);
		ll rightVal = sum(MAX)-sum(where);
		// 왼쪽 + 오른쪽
		ll temp = where*leftcnt - leftVal;
		temp%=MOD;
		temp += rightVal - where*rightcnt;
		temp%=MOD;
		ans *= temp;
		ans %= MOD;

		update(where,where);
		if(i==0) ans=1LL;
	}
	cout << ans%MOD << '\n';
return 0;
}