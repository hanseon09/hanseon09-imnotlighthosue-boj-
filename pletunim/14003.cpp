#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin>>N;
    int *num = new int[N];
    int *dp = new int[N];
    int a;
    int idx, dptmp=0;
    vector <int> L;
    stack <int> s;
    vector <int>::iterator p;
    for(int i=0;i<N;i++){
        cin>>a;
        num[i]=a;
        if(L.size()==0) {
            L.push_back(num[i]);
            dp[i]=1;
        }
        else{
            if(L[L.size()-1]<num[i]) {
                L.push_back(num[i]);
                dp[i] = L.size();
            }
            else{
                p = lower_bound(L.begin(),L.end(),num[i]);
                *(p)=num[i];
                dp[i]=p-L.begin()+1;
            }
        }
        if(dp[i]>dptmp) {
            idx = i;
            dptmp = dp[i];
        }
    }
    cout<<L.size();
    s.push(num[idx]);
    for(int i=idx-1;i>=0;i--){
        if(num[i]<num[idx] && dp[i]+1 == dp[idx]){
            idx = i;
            s.push(num[i]);
        }
    }
    cout<<"\n";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}