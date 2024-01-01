#include <cstdio>
#include <algorithm>
using namespace std;

typedef long long ll;

ll a[50000], n;

ll free(ll k){
	ll ret=0;
	for(int i=1; i*i<=k; i++)
		ret+=a[i]*(k/(i*i));
	return ret;
}

int main(){
	a[1]=1;
	for(int i=1; i<50000; i++){
		for(int j=2*i; j<50000; j+=i)
			a[j]-=a[i];
	}
	scanf("%lld", &n);
	ll l=0, r=2*n, m;
	while(l<r-1){
		m=(l+r)/2;
		ll tmp=free(m);
		if(tmp<n) l=m;
		else if(tmp>=n) r=m;
	}
	printf("%lld", r);
	return 0;
}