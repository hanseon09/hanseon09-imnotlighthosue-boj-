// #include <iostream>
// #include <string>
// #define NMAX 100010
// #define MOD 20150523
// #define lint long long int
// using namespace std;
 
// string A, B;
 
// lint num369[NMAX][10], tot369[NMAX];
// lint mul3[NMAX][10][3], tot3[NMAX][3];
 
// lint cntA, cntB;

// lint pow(lint val, int k) {
//     if(k == 0) return 1;
//     else if(k == 1) return val;
//     else {
//         if(k%2 == 0) return pow(( val*val )%MOD, k/2);
//         else return ( val*pow(val*val%MOD, k/2) )%MOD;
//     }
// }
 

// lint get(string num) {
//     lint ret, len;
 
//     ret = 0;
//     len = num.length();
 

//     for(int idx=0, l=len;idx<len;idx++, l--) {
 
//         if(num[idx] > '0') ret = (ret + tot369[l-1]%MOD);
//         int t = num[idx]-'0';
//         for(int j=1;j<t;j++) ret = (ret + num369[l][j])%MOD;
 
 
//         if(num[idx] == '3' or num[idx] == '6' or num[idx] == '9') {

//             ret++;
//             lint t=0;
//             for(int nxt =idx+1;nxt<len;nxt++) t = (t*10 + (num[nxt]-'0'))%MOD;
 
//             ret = (ret + t)%MOD;

            
//             break;
//         }
//     }
//     int before=0;
//     for(int idx=0, l=len;idx<len;idx++, l--) {

//         int m = (3-before)%3;

//         if(num[idx] == '0') {
//             if(m == 0 and idx+1 == len) ret++;
//             else continue;
//         }
 
//         else {

//             ret = (ret + tot3[l-1][m])%MOD;
//             int t = num[idx]-'0';
//             if(idx+1 == len) t++;
 
//             for(int j=1;j<t;j++) ret = (ret + mul3[l][j][m])%MOD;

//             before = (before+t)%3;

//             if(num[idx] == '3' or num[idx] == '6' or num[idx] == '9') break;
//         }
//     }
 
//     return ret;
// }
 
// int check(string num) {

//     int f, tmp;
 
//     f = tmp = 0;
//     for(int i=0;i<num.length();i++) {
//         if(num[i]=='3' or num[i]=='6' or num[i]=='9') {
//             f = 1;
//             break;
//         }
//         else tmp += (num[i]-'0');
//     }
 
//     if(f or tmp%3==0) return 1;
//     else return 0;
// }
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cin >> A >> B;
//     tot369[1] = 3;
//     num369[1][3] = num369[1][6] = num369[1][9] = 1;
//     for(int idx=2;idx<=B.length();idx++) {
//         for(int j= 0;j<=9;j++) {
//             if(j>0 and j%3 == 0) num369[idx][j] = pow(10, idx-1);
//             else num369[idx][j] = tot369[idx-1];
 
//             tot369[idx] = (tot369[idx] + num369[idx][j])%MOD;
//         }
//     }
//     tot3[0][0] = 1;
//     for(int idx=1;idx<=B.length();idx++) {
//         if(idx == 1) {
//             for(int j=0;j<=9;j++) {
//                 if(j>0 and j%3 == 0) continue;
//                 else {
//                     mul3[idx][j][j%3]++;
//                     tot3[idx][j%3]++;
//                 }
//             }
//         }
 
//         else {
//             for(int k=0;k<3;k++) tot3[idx][k] = 0;
 
//             for(int j=0;j<=9;j++) {
//                 if(j>0 and j%3 == 0) continue;
 
//                 for(int k=0;k< 3;k++) {
//                     mul3[idx][j][k] = tot3[idx-1][(k-j + 12)%3];
 
//                     tot3[idx][k] = (tot3[idx][k] + mul3[idx][j][k])%MOD;
//                 }
 
//             }
//         }
//     }
//     cntA = (get(A) - check(A) + MOD)%MOD;
//     cntB = (get(B) + MOD)%MOD;
 
 
//     cout << (cntB-cntA+MOD)%MOD;
 
// }

// #include <bits/stdc++.h>

// using namespace std;

// #define endl "\n"
// #define int long long
// #define float double

// int DP[502][50001];
// int S[502][50001];
// const int MOD = 1000000007;


// int Sum(int i, int s, int e)
// {
// 	if (e < s)
// 		return 0;
// 	return (S[i][e] - (s > 0 ? S[i][s - 1] : 0) + MOD)%MOD;
// }

// int32_t main()
// {
// 	ios_base::sync_with_stdio(false);
// 	cin.tie(NULL);
// 	std::cout.tie(NULL);
// 	DP[0][0] = 1;
// 	for (int i = 0; i <= 500; i++)
// 		for (int j = 0; j <= 50000; j++)
// 		{
// 			if (j + (i + 1) <= 50000)
// 				DP[i + 1][j + (i + 1)] = (DP[i + 1][j + (i + 1)] + DP[i][j]) % MOD;
// 			DP[i + 1][j] = (DP[i + 1][j] + DP[i][j]) % MOD;
// 		}
// 	for (int i = 0; i <= 500; i++)
// 	{
// 		S[i][0] = DP[i][0];
// 		for (int j = 1; j <= 50000; j++)
// 			S[i][j] = (S[i][j - 1] + DP[i][j]) % MOD;
// 	}

// 	int T;
// 	cin >> T;
// 	while (T--)
// 	{
// 		int red, blue;
// 		cin >> red >> blue;

// 		int ans = 0;
// 		for (int i = 1; i <= 500; i++)
// 		{
// 			int a = i * (i + 1) / 2;
            
// 			ans = (ans + Sum(i, a - blue, red)) % MOD;
// 		}

// 		cout << ans << endl;
// 	}
// }


// #include <bits/stdc++.h>
// #define sz(v) ((int)(v).size())
// #define all(v) (v).begin(), (v).end()
// using namespace std;
// using lint = long long;
// using pi = pair<lint, lint>;
// const int mod = 1e9 + 7;
// const int MAXC = 2000005;

// struct Daps{
// 	int weight;
// 	vector<int> sln;
// 	Daps(){
// 		weight = 0;
// 		sln = vector<int>();
// 	}
// 	bool operator<(const Daps &d)const{
// 		if(weight != d.weight) return weight < d.weight;
// 		return sln < d.sln;
// 	}
// }dap;

// int n;
// int req[5];
// int a[20][5];

// void bktk(vector<int> v, Daps d, int depth){
// 	if(depth == n){
// 		for(int i=0; i<4; i++){
// 			if(v[i] < req[i]) return;
// 		}
// 		dap = min(dap, d);
// 		return;
// 	}
// 	bktk(v, d, depth + 1);
// 	for(int i=0; i<4; i++) v[i] += a[depth][i];
// 	d.weight += a[depth][4];
// 	d.sln.push_back(depth + 1);
// 	bktk(v, d, depth + 1);
// }

// int main(){
// 	dap.weight = 1e9;
// 	cin >> n;
// 	for(int i=0; i<4; i++) cin >> req[i];
// 	for(int i=0; i<n; i++){
// 		for(int j=0; j<5; j++){
// 			cin >> a[i][j];
// 		}
// 	}
// 	vector<int> foo(4);
// 	bktk(foo, Daps(), 0);
// 	if(dap.weight > 1e8) puts("-1");
// 	else{
// 		printf("%d\n", dap.weight);
// 		for(int i=0; i<sz(dap.sln); i++){
// 			printf("%d",dap.sln[i]);
// 			if(i + 1< sz(dap.sln)) printf(" ");
// 			else printf("\n");
// 		}
// 	}
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef pair<int, int> pii;
// typedef long long ll;

// int N, M, sz;
// vector<int> adj[5000];
// vector<int> revadj[5000];
// vector<int> stk;

// vector<vector<int>> SCC;
// int sn[5000];
// int sOutdegree[5000];

// bool visited[5000];
// void dfs(int node) {
// 	visited[node] = 1;
// 	for (int next : adj[node]) 
// 		if (!visited[next])
// 			dfs(next);
// 	stk.push_back(node);
// }

// void makeSCC(int node) {
// 	visited[node] = 1;
// 	SCC[sz].push_back(node);
// 	sn[node] = sz;
// 	for (int next : revadj[node])
// 		if (!visited[next])
// 			makeSCC(next);
// }

// int main() {
// 	ios::sync_with_stdio(false);
// 	cin.tie(0);
// 	//outdegree가 0인 SCC의 원소
// 	while (true) {
// 		SCC.clear();
// 		sz = 0;
// 		for (int i = 0; i < 5000; i++) {
// 			adj[i].clear();
// 			revadj[i].clear();
// 		}

// 		cin >> N;
// 		if (N == 0) break;
// 		cin >> M;

// 		for (int i = 0; i < M; i++) {
// 			int a, b; 
// 			cin >> a >> b;
// 			a--, b--;
// 			adj[a].push_back(b);
// 			revadj[b].push_back(a);
// 		}

// 		memset(visited, 0, sizeof(visited));
// 		for (int i = 0; i < N; i++)
// 			if (!visited[i]) dfs(i);
// 		memset(visited, 0, sizeof(visited));
// 		while(stk.size()){
// 			int here = stk.back();
// 			stk.pop_back();
// 			if (visited[here]) continue;
// 			SCC.resize(sz + 1);
// 			makeSCC(here);
// 			sz++;
// 		}

// 		memset(sOutdegree, 0, sizeof(sOutdegree));
// 		for (int i = 0; i < N; i++) 
// 			for (int j : adj[i]) 
// 				if (sn[i] != sn[j])
// 					sOutdegree[sn[i]]++;

// 		vector<int> ans;
// 		for (int i = 0; i < sz; i++)
// 			if (sOutdegree[i] == 0)
// 				for (int node : SCC[i])
// 					ans.push_back(node);
// 		sort(ans.begin(), ans.end());
	
// 		for (int nd : ans) cout << nd + 1 << ' ';
// 		cout << '\n';
// 	}
// 	return 0;
// }

// #include <cstdio>

// int main(void)
// {
//         int N,a,b;
//         scanf("%d", &N);
//          N += (2400 - 2013);
//          a = (N + 5) % 12;
//          b = (N + 9) % 10;
//         printf("%c%c\n", a + 'A', b + '0');
//         return 0;
        
// }


#include <cstdio>

int main(void)
{
    printf("Tlqkf");

    return 0;
}