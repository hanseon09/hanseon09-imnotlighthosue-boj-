



	// while(!Queue.empty())
	// {// #include <cstdio>

// int main()

// {

// char C; int I; long long L; double D; char S[101];
// scanf("%c %d %lld %lf %s", &C, &I, &L, &D, S);
// printf("%s %lf %lld %d %c", S, D, L, I, C);
// }

// #include <cstdio>

// int main() {

//   // 변수 선언. 특별할 것 없음.
//   int H, M, S, T;

//   // 입력 받기
//   scanf("%d %d %d", &H, &M, &S);
//   scanf("%d", &T);

//   // 초 줄이기. T를 60으로 나눈 나머지가 초에 해당
//   // T가 100이라면, 1분 40초. 100 % 60 은 40.
//   S = S - T % 60;

//   // 분으로 변경
//   T = T / 60;

//   // 초 줄였더니 음수면 분에서 차용
//   // S는 30, T는 100이라면, S에서 40 빼야 함. 그럼 S는 -10.
//   if(S < 0) {
//     S = S + 60;
//     M = M - 1;
//   }

//   // 분 줄이기
//   M = M - T % 60;

//   // 시간으로 변경
//   T = T / 60;

//   // 분 줄였더니 음수면 시에서 차용
//   if(M < 0) {
//     M = M + 60;
//     H = H - 1;
//   }

//   // 시간 줄이기
//   H = H - T;

//   // 출력하기
//   printf("%d %d %d", H, M, S);
// }
// */
// #include <cstdio>

// int main( )
// {
//         int a, b, c, d;
//         int sum;
//         scanf("%d %d %d %d", &a, &b, &c, &d);
//         sum = a + b + c + d;
//                 // sum 은 등

//         if(sum == 3) // 만약
//         {
//                 printf("A\n");
//                 // 도
//         }
//         else if (sum == 2) // 만약 1번이 아니라면
//         {
//                 printf("B\n");
//                 // 개
//         }
//         else if (sum == 1)
//         {
//                 printf("C\n");
//                 //걸
//         }
//         else if(sum == 0)
//         {
//             printf("D\n");
//         }

//         else if(sum == 4)
//         {
//         printf("E\n");
//         }

// }

// #include <cstdio>

// int main()
// {
//         int a, b, c, d, e;
//         scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//         printf("%d", (a * a + b * b + c * c + d * d + e * e) %10);
// }*/
// /*#include <cstdio>

// int main()
// {
//         int h,m;
//         int d;
//         scanf("%d %d", &h, &m);
//         scanf("%d", &d);

//         m = m + d;
//         h = h + m / 60;
//         m = m % 60;
//         h = h % 24;
//         printf("%d %d", h, m);

//  }

// #include <cstdio>

// int main (void)

// {
//         int n;
//         int Ai=0;
//         int i;
//         int j;

//         scanf("%d", &n);
//         for(i=0; i<n; i++)
//         {
//                 scanf("%d", &j);
//                 Ai = Ai + j;

//         }

//         Ai = Ai / n;

//         if(Ai >= 80)
//         {
//                 printf("easy");

//         }

//         else if(Ai > 60)
//         {
//                 printf("normal");
//         }

//         else if(Ai <= 60)
//         {
//                 printf("hard");
//         }

// }

// #include <cstdio>
// int main(void)
// {
//         int n;
//         int i;
//         int a[1000000];
//         int b;
//         int count=0;

//         scanf("%d", &n);

//         for(i=0; i < n; i++)
//         {
//                 scanf("%d", &a[i]);
//         }

//         for(i=0; i < n; i++)
//         {
//                  scanf("%d", &b);
//                 if(a[i] == b)
//                         count++;

//         }

//         printf("%d", count);

// }

// #include <cstdio>
//  int main(void)
// {
//         long long a;
//         int count=0;
//         int n=0;

//         scanf("%lld", &a);

//         while(a >= 0)
//         {
//                 n = 0;
//                 while(a)
//                         {
//                                 n = n + a % 10;
//                                 a = a / 10;

//                         }
//                 a = n;
//                 count++;

//                 }
//         printf("%d", count);

// }

// #include <cstdio>

// int main(void)
// {
//         int n;
//         int m;
//         int count = 0;
//         int i;
//         int j;

//         scanf("%d %d", &n, &m);

//         for(i=n; i<=m; i++)
//         {

//         }

// }

// #include <cstdio>
// int main(void)
// {
//         int a[10];
//         int b[10];
//         int wina=0;
//         int winb=0;
//         int i;

//         for(i=0; i < 10; i++)
//         {
//                 scanf("%d", &a[i]);
//         }
//         for(i=0; i < 10; i++)
//         {
//                 scanf("%d", &b[i]);
//         }
//         if(a[i] > b[i])
//         {
//                 wina++;
//         }
//         else if(a[i] < b[i])
//         {
//                 winb++;
//         }

//         if(wina > winb)
//         {
//                 printf("A");

//         }
//         else if(wina < winb)
//         {
//                 printf("B");
//         }
//         else
//         {
//                 printf("D");
//         }
//         return 0;

// // }

// #include <cstdio>

// int main() {

//  int N;
//   int K;
//   int count = 0;
//   int ans = 0;

//   scanf("%d %d", &N, &K);

//   for(int i = 1; i <= N; i++) {

//     if((N % i) == 0) {

//       count++;

//       if(count == K) {
//         ans = i;
//         break;
//       }
//     }
//   }

//   printf("%d", ans);

//         }

// #include <cstdio>
// #include <vector>
// using namespace std;

// int main (void)
// {
//         vector<int> v;
//         int n;
//         int i;
//         int a[100000];
//         scanf("%d", &n);
//         for(int i=0;i<0;i++)
//                 scanf("%d" a[i]);
// }
// int max=0;
// int max2=100;
// for(i=0; i<n; i++)
// {
//         int(max<a[i]){
//                 max2=a[i]

//         }
//         y= y+a[i];
//         printf("%d", (y-max2-max)/(n-2))
// }
// #include <cstdio>
// #include <vector>
// using namespace std;

// int main (void)
// {
//         int n;
//         int a[10000];
//         int i;
//         vector<int>v;
//         int k;

//         scanf("%d", &n);
//         for(i=0; i<n; i++)
//         {
//         	int j;
//         	scanf("%d", &j);
//         	v.push_back(j);
// 		}
// 		for(i=0; i<n; i++)
// 		{
// 			if(v[i]==v[i+1]){

// 				k=i+1;
// 				if(k>m){
// 					m=k;
// 				}
// 			}
// 		}
// 		printf("%d",m);
// 		return 0;

// }

// #include <cstdio>

// int main() {

//   int N, S[100000], rank[100000];

//   scanf("%d", &N);

//   for(int i = 0; i < N; i++) {
//     scanf("%d", &S[i]);
//   }

//   for(int i = 0; i < N; i++) {

//     rank[i] = 1;

//     for(int j = 0; j < N; j++) {

//       if(S[i] < S[j]) {
//         rank[i]++;
//       }
//     }
//   }

//   for(int i = 0; i < N; i++) {
//     printf("%d\n", rank[i]);
//   }

//   return 0;
// }

// #include <cstdio>

// int main() {

//   int tell;
//   int count[10] = {0, };

//   scanf("%d", &tell);

//   for(int i = 0; i < 8; i++) {

//     count[tell % 10]++;

//     tell = tell / 10;
//   }

//   count[6] += count[9] + 1;
//   count[6] /= 2;
//   count[9] = count[6];

// int maxCount = 0;

//   for(int i = 0; i < 10; i++) {

//     if(maxCount < count[i]) {
//       maxCount = count[i];
//     }
//   }

//   printf("%d", maxCount);
//   return 0;
// }

// 응용 문제 5번
// #include <cstdio>

// int main(void)
// {
//         int s[100];
//         int n;
//         int i
//         for(int i = 0; i < n; i++)
//         scanf("%d", &s[i]);
//                 {
//                         scanf("%d", &s[i]);
//                 }
//                 for(int i = N - 2; i >= 0; i--) {

//     if(s[i] >= s[i + 1]) {

//       int dif = s[i] - s[i + 1] + 1;

//       sum = sum + dif;

//       s[i] = s[i] - dif;
//     }
//   }

//   printf("%d", sum);
//   return 0;
// }

// weak 4
//  #include <cstdio>
// #include <vector>
// using namespace std;
// int main(void)
// {
//         int A[10];
//         int B[10];
//         int i, j;
//         for(i=0; i < 10; i++)
//                 {
//                         scanf("%d", &A[i]);

//                 }
//         for(i=0; i <10; i++)
//                 {
//                         scanf("%d", &B[i])

//                 }
//         int last winner = -1;
//         int A_score = 0;
//         int B_score = 0;
//         for(i=0; i < 10; i++)
//                 {
//                         if(A[i]> B[i])
//                 }

// }
// #include <cstdio>

// int main (void)
// {
//         int ar1[100][100]={0};
//         int n,m;
//         scanf("%d %d", &n, &m);
//         int liqx, liqy;
//         int i;
//         int temp;
//         for(i=0; i < m; i++)
//                 {
//                         scanf("%d", &temp[i][j])
//                         if(map[i][j] == 2)
//                         {
//                                 lipx = j;
//                                 lipy = i;
//                         }
//                         while
//                 }

// }
// #include <cstido>

// int main(void)
// {
//         int car[101][101] = {0, };
//         int n,m;
//         int i;
//         scanf("%d %d", &n, &m);
//         for (i=0; i < m; j < n; j++)
//         {
//                 scanf("%d", &map [i][j]);
//                 if (map[i][j] == 2)
// {

// }
//         }

// }

// #include <cstdio>

// int main (void)
// {
//         int car[101][101] ={0,1};
//         int n, m;
//         int i;
//         int j;
//         scanf ("%d %d", &n, &m);
//         for (i = 0; i <m; i++)
//                 {
//                         int from, to, car_temp;
//                         scanf("%d %d %d", &from, &to, &car_temp);
//                         if(car[from][to] == 0 || car[from][to] == 0 ||
//                         car[from][to] < car_temp)
//                                 car[from][to] = car_temp;

//                 }
//         int count = 0, dist = 0;
//         for(i = 0; i < n; i++)
//         {
//                 int sumin = 0, sumout = 0;
//                 for (j=1; j<=n; j++)
//                         {
//                                 sumin += car[j][i];
//                                 sumout += car[i][j];
//                         }
//                 if(sumin  > sumout) printf("%d",i);

//         }
//         return 0;
// }

// #include <cstdio>

// int main (void)
// {
//         int map[102][102]={0,2};
//         int m, n;
//         int i, j;
//         scanf("%d %d", &m, &n);
//         for(i=1; i<=n; i++)
//                 {
//                         for(j=1; j<m; j++)
//                                 {
//                                         scanf("%d", &map[i][j]);
//                                 }
//                 }
//         int mxg=0, x=-1, y=-1;
//         for(i=1; i <= n; i++)
//                 {
//                         for(j=1; j<=m; j++)
//                                 {
//                                         int sum_gold = 0;
//                                         int max_gold = 0;

//                                         sum_gold += map[i][j] + map[i + 1][j]
//                                         + map[i - 1][j] + map[i][j + 1] +
//                                         map[i][j - 1];
//         if (max_gold  < sum_gold)
//         {
//                 max_gold = sum_gold;
//                 x = j;
//                 y = i;
//         }
//                                 }
//                 }

//          printf("%d %d %d", x, y, max_gold);
//         return 0;
// }

// #include <cstdio>
// #include <vector>
// using namespace std;

// int main() {

// 	vector<int> v[10001];
// 	int n, t, k;
// 	scanf("%d", &n);
// 	scanf("%d %d", &t, &k);

// 	for (int i = 0; i < t; i++)
// 	{
//     int tx, ty;
// 		scanf("%d %d", &tx, &ty);

// 		v[tx].push_back(ty);
// 	}

// 	int check = 0;
// 	for (int i = 1; i <= k; i++)
// 	{
// 		int kx, ky;
// 		scanf("%d %d", &kx, &ky);

// 		for (int j = 0; j < v[kx].size(); j++)
// 		{

// 			if (v[kx][j] == ky && !check)
// 				check = i;
// 		}
// 	}
// 	if(check)
//     printf("%d", check);
// 	else
//     printf("-1");

// 	return 0;
// }

// #include <cstdio>
// int main()
// {

// 	int map[102][102] = { 0, };

// 	int n, m, c;
// 	scanf("%d %d %d", &n, &m, &c);

// 	for (int i = 0; i < c; i++)
// 	{
// 		int mine_x, mine_y;
// 		scanf("%d %d", &mine_x, &mine_y);

// 		map[mine_y][mine_x] = -1;
// 		if(map[mine_y][mine_x - 1] != -1)
// 			map[mine_y][mine_x - 1]++;

// 		if(map[mine_y][mine_x + 1] != -1)
// 			map[mine_y][mine_x + 1]++;

// 		if(map[mine_y - 1][mine_x] != -1)
// 			map[mine_y - 1][mine_x]++;

// 		if(map[mine_y + 1][mine_x] != -1)
// 			map[mine_y + 1][mine_x]++;

// 		if(map[mine_y - 1][mine_x - 1] != -1)
// 			map[mine_y - 1][mine_x - 1]++;

// 		if(map[mine_y - 1][mine_x + 1] != -1)
// 			map[mine_y - 1][mine_x + 1]++;

// 		if(map[mine_y + 1][mine_x - 1] != -1)
// 			map[mine_y + 1][mine_x - 1]++;

// 		if(map[mine_y + 1][mine_x + 1] != -1) map[mine_y
// + 1][mine_x + 1]++;
// 	}

// 	for (int i = 1; i <= m; i++)
// 	{
// 		for (int j = 1; j <= n; j++) {
// 			printf("%d ",map[i][j]);
//     }

// 		printf("\n");
// 	}
// 	return 0;
// }

// #include <cstdio>

// int Pascal(int row, int col)
// {
//     if(row == 1 || col == 1 || col == row)
//                 return 1;
//                 return Pascal( row - 1, col) + Pascal(row - 1,col - 1);

// }

// int main(void)
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     printf("%d",Pascal(n,m));
// }
// 에라 모르겠따!

// #include <cstdio>

// int main(void)
// {
//         char str[1001];
//         int position[26];
//         scanf("%s", str);
//         for (int i=0; i < 26; i=+)
//                 {
//                         if(position[str[i] - 'a'] == -1)

//                 }
// }

// #include <cstdio>
// #include <cstring>

// int main(void)
// {
//         char c[101] = {0, }, r[101] = {0, };
//         int n;

// }

// #include <cstdio>
// #include <cstring>

// int main(void)
// {
//     char c[101] = {0, }, r[101] = {0, };
//     int n;
//     scanf("%s", c);
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++)
//     {
//         scanf("%s",r);
//         if (strcmp(c,r) == 0)
//         {
//             printf("예");
//             return 0;
//         }
//     }
//     printf("아니오");
//     return 0;
// }

// #include <cstdio>
// #include <cstdio>

// char str[100001];

// int palindrome(int st, int en)
// {
//         if(st > en) return 0;
//         else if(str[st] == str[en])
//                 return palindrome(st + 1, en - 1);
//         else return 1;

// }
// int main(void)
// {
//         int t;
//         int count = 0;
//         scanf("%d", &t);
//         for(int i = 0; i < t; i++)
//                 {
//                         scanf("%s", str);
//                         count += palindrome(0,strlen(str) - 1);

//                 }
//         printf("%d",t - count);
//         return 0;
// }

// #include <cstdio>
// #include <iostream>
// #include <string>
// using namespace std;

// int main(void)
// {
//         string s;
//         cin >> s;
//         string bomb;
//         cin >> bomb;
//         int bomb_size = bomb.size();
//         int index = 0;
//         while (1)
//                 {
//                         index = s.find(bomb);
//                         if (index < 0)
//                                 break;
//                         s = s.substr(0, index) + s.substr(index + bomb_size,
//                         s.size()(index + bomb_size));

//                 }
//         if(s.size() == 0)
//                 printf("art!");
//         else
//                 cout << s;
//         return 0;
// }

// #include <cstdio>

// int main()
// {
//         char str[15] = "ab cDe fg hi";
//         int i, n = 0, s = 0;
//         for(i = 0; str[i]; i++)
//                 n = i;
//         for(i = 0; i < n; i++)
//                 if('a' <= str[i] && str[i] <= 'y')
//                         s += str[i] - 'a';
//         printf("%d",s);
//         return 0;
// }

// #include <cstdio>
// #include <vector>

// using namespace std;
// int main(void) {
//   vector<char> k;
//   vector<char> v;

//   int kid;
//   int sir;

//   for (int i = 0; i < v.size(); i++) {
//     char a;
//     scanf("%c", &a);
//     v.push_back(a);
//   }

//   for (int j = 0; j < k.size(); j++) {
//     char b;
//     scanf("%c", &b);
//     k.push_back(b);
//   }
//   for (int l = 0; l < v.size(); l++)
//     if (v[l] > k[l]) {
//       printf("sir");
//       break;
//     }
//   for (int l = 0; l < v.size(); l++)
//     if (v[l] < k[l]) {
//       printf(kid);
//       break;
//     }

// #include <cstdio>

// int main(void)
// {

// }

// #include <cstdio>

// int main(void)
// {
//         int a;
//         printf("존잘 검색대\n");
//         printf("이름을 입력하세요");
//         scanf("%d", &a);

//         if(유한선){
//                 printf(존잘);
//                 break;
//         }

//

// #include <cstdio>
// #include <string>
// #include <iostream>
// using namespace std;

// struct person
// {
//         int id;
//         string name;
//         int c;
//         int a;
// };

// int main(void)
// {
//         person student[100000];
//         int n;
//         scanf("%d",&n);
//         for(int i = 0; i < n; i++)
//                 {
//                         int id, c, a;
//                         char name[21];
//                         scanf("%d %s %d %d", %id, name, %c, %a);
//                         student[i].id = id;
//                         student[i].name = name;
//                         student[i].c = c;
//                         student[i].a = a;

//                 }
//         int m;
//         scanf("%d", &m);
//         for (int i = 0; i < n; i++)
//                 {
//                         string search;
//                         cin >> search;
//                         int check = 1;
//                         for(int j = 0; j < n)
//                                 {
//                                         printf("%d %d %d\n", student[j].id,
//                                         student[j].a)
//                                 check = 0;
//                                 }
//                                 if(check) printf("-1\n");
//                 }
//         return 0;

// }

// #include <cstdio>
// #include <utility>
// using namespace std;

// int main(void)
// {
//         pair<int, int> p[10001];
//         int n;
//         scanf("%d",&n);
//         for(int i = 1; i <= n; i++)
//                 {
//                         int t, a;
//                         scanf("%d %d", &t, &a);
//                         p[i] = make_pair(t, a);

//                 }
//         pair<int, int> no_1 = {-1,-1};
//         int ans = 0;
//         for(int i = i; i<= n; i++)
//                 {
//                         if (p[i] > no_1)
//                         {
//                                 no_1 = p[i];
//                                 ans = i;

//                         }

//                 }
//         printf("%d", ans);
//         return 0;

//         }

// #include <cstdio>
// #include <utility>
// using namespace std;

// int main(void)
// {
//         pair<int, int> p[51][51];
//         int n,m;
//         scanf("%d %d", &n, &m);
//         for(int i = 1; i <= n;)
//                 {
//                         int a,b;
//                         scnaf("%d %d", &a, &b);
//                         p[i][j] = make_pair
//                 }
// }

// #include <cstdio>
// #include <stack>
// #include <queue>
// #include <string>
// #include <iostream>
// using namespace std;

// int main(void)
// {
//         int n;
//         scanf("%d %d", &n, &k);
//         queue<int> q;
//         for(int i = 1; i < n;  i++)
//                 {
//                         q.push(i);
//                 }
//         while (lq.empty())
//                 {
//                         printf("%d", s.top());
//                         s.pop();
//                 }
//         print("\n");
//         while(!q.empty())
//                 {
//                         cout << q.front();
//                         printf(" ");
//                         q.pop();

//                 }
//         printf("%d", q.front());
//         q.pop();

// }

// #include <cstdio>
// #include <queue>
// using namespace std;

// int main(void)
// {
//         int n, k;
//         scanf("%d %d", &n, &k);
//         queue<int> q;
//         for(int i = 1; i <= n; i++)
//                 {
//                         q.push(i);
//                 }
//         while (!q.empty())
//                 {
//                         for (int i = 0; i < k - 1; i++)
//                                 {
//                                         q.push(q.front());
//                                         q.pop();

//                                 }
//                         printf("%d", q.front());
//                         q.pop();
//                 }
//         return 0;

// }

// #include <cstdio>
// #include <stack>
// using namespace std;

// int main()
// {
//         int n;
//         scanf("%d", &n);
//         stack<int> s;
//         for(int i = 0; i < n; i++)
//                 {
//                         int size;
//                         scanf("%d",&n);
//                         stack<int> s;
//                         for(int i = 0; i < n; i++)
//                                 {
//                                         int size;
//                                         scanf("%d", &size);
//                                         while (!s.empty())
//                                                 {
//                                                         s.pop();

//                                                 }
//                                         s.push(size);

//                                 }
//                         printf("%d", s.size());
//                         return 0;
// {

// }
//                 }

// }

// #include <cstdio>

// int main(void)
// {
//         printf("이선규 인스타 팔로우 해조");
// }

// #include <cstdio>
// #include <stack>

// int main(void)
// {
//         char str[100001];
//         stack<char> s;
//         scanf("%d", str);
//         for(int i = 0; str[i]; i++)
//                 {
//                         if (str[i])
//                 }

// }

// #include <cstdio>
// #include <algorithm>
// using namespace std;

// int main(void)
// {
//         double h[10001];
//         double temp_h[100001];
//         int n;
//         scanf("%d", &n);
//         for(int i = 0; i < n; i++)
//                 {
//                         scanf("%lf", &h[i]);
//                         temp_h[i] = h[i];

//                 }
//         sort(h, h + n);
//         int count = 0;
//         for(int i = 0; i < n; i++)
//                 {
//                         if(h[i] != temp_h[i])
//                                 count++;

//                 }
//         printf("%d", count);

// }

// #include <cstdio>
// #include <algorithm>

// int main(void)
// {
//         pair<int, int> p[100001] = {};
//         int n;
//         scanf("%d", &n);
//         for(int i = 0; i < n; i++)
//                 {

//                 }

// }

// #include <cstdio>
// #include <algorithm>
// using namespace std;

// struct charachter
// {
//         int level;
//         int exp;
//         int power;

// };

// bool cmp(charachter left, charachter right)
// {
//         if(left.level > right.level)
//                 return true;
//         else if(left.level == right.level)
//         {
//                 if(left.exp > right.exp)
//                         return left.power > right.power;

//         }
//         else
//                 return false;

// }

// int main(void)
// {
//         charachter c[100001];
//         int n;
//         scanf("%d", &n);
//         for(int i = 0; i < n; i++)
//                 {

//                                                                 scanf("%d %d
//                                                                 %d",
//                                                                 &c[i].level,
//                                                                 %c[i].exp,&c[i].power);
//                         sort(c, c + n,  cmp);
//                         for(int i = 0; i < n; i++)
//                                 {
//                                         printf("%d %d %d\n", c[i].level,
//                                         c[i].exp c[i].power); return 0;
//                                 }
//                 }
// }

// #include <cstdio>
// #include <algorithm>
// using namespace std;

// int main(void)
// {
//         pair<int, int> p[100001];
//         int n;
//         scanf("%d", &n);
//         for(int i = 0; i < n; i++)
//         {
//                 scanf("%d %d", &p[i]);

//         }
//         sort(p, p + n);
//         int now = 0;
//         int ans = 0;
//         for(int i = 0; i < n; i++)
//         {
//                 if(now <= p[i].second){
//                         now = p[i].first;
//                         ans++;
//                 }
//                 printf("%d",ans);
//                 return 0;

//         }

// }

// #include <cstdio>
// #include <queue>
// using namespace std;

// int main(void)
// {
//         int n, m;
//         scanf("%d %d", &n, &m);
//         queue<int> q;
//         for(int i=1; i<=n; i++)
//                 {
//                         q.push(i);
//                 }
//         printf("<");
//         for(int i=0; i<=n; i++)
//                 {
//                         q.push(q.front());
//                         q.pop();

//                 }
//         printf("%d,",q.front());
//         return 0;

// }

// #include <cstdio>
// #include <stack>
// using namespace std;
// int main(void)
// {
//         stack
// }

// #include <cstdio>
// #include <stack>
// using namespace std;
// int main(void)
// {
//         stack<int> st;

//         st.push(4);
//         st.push(5);
//         st.pop();

//         printf("%d\n", st.top());
//         printf("%d\n", st.empty());
//         printf("%d\n", st.size());

//         return 0;

// }

// #include <cstdio>
// #include <queue>
// using namespace std;

// int main(void)
// {
//         queue<int> q;

//         q.push(4);
//         q.push(5);

//         q.pop();

//         printf("%d\n", q.front());
//         printf("%d\n", q.empty());
//         printf("%d\n", q.size());

//         return 0;

// }

// #include <cstdio>

// int n = 10;
// int a[11], b[11];

// int main(void)
// {
//         int i;
//         for(i = 1; i <= n; i++)
//                 scanf("%d", &a[i]);
//         for(i = 1; i <= n; i++)
//                 scanf("%d", &b[i]);

//         int awin, bwin, draw;
//         awin = bwin = draw = 0;
//         for(i = 1; i <= n; i++)
//                 {
//                         if(a[i] > b[i]) awin++;
//                         else if(a[i] < b[i]) bwin++;
//                         else draw++;

//                 }
//         if(awin > bwin) printf("A\n");
//         else if(awin < bwin) printf("B\n");
//         else printf("D\n");

//         return 0;
// }

// #include <cstdio>
// #include <stack>
// using namespace std;

// char a [100001];

// int main(void)
// {
//         scanf("%s", a);
//         stack<int> s;
//         int ans = 0;
//         for(int i=0; a[i]; i++)
//                 if(a[i] == '('){
//                         s.push(i);

//                 } else {
//                         if(s.top()+1 == i){
//                                 s.pop();
//                                 ans += s.size();

//                         }else{
//                                 s.pop();
//                                 ans += 1;
//                         }
//                 }
//         printf("%d", ans);
//         return 0;

// }

// #include <cstdio>

// int main(void)
// {
//         int a;
//         int b;
//         scanf("%d %d", &a, &b);
//         for(int i = 0; )
// }

// #include <cstdio>

// int main(void)
// {
//     int A;
//     int B;

//     scanf("%d %d", &A, &B);

//     printf("A+B");
// }

// #include <cstdio>
// #include <algorithm>
// using namespace std;
// long long a[10000000];

// int main(void)
// {
//     int n;
//         scanf("%d", &n);
//         for(int i=0; i<n; i++)
//                 {
//                         scanf("%lld",&a[i]);

//                 }
//         sort(a,a+n);
//         long long ans = a[0];
//         int ans_cat = 1;
//         int cut = 1;

//         for(int i=1; i<n; i++)
//                 {
//                         if(a[i] == a[i-1]){
//                                 cut += 1;

//                         }else {
//                                 cut = 1;

//                         }if(ans_cat < cut) {
//                                 ans_cat = cut;
//                                 ans = a[i];

//                         }
//                 }
//         printf("%lld\n", ans);
//         return 0;
// }

// #include <cstdio>
// #include <algorithm>
// using namespace std;

// struct Student
// {
//         int country;
//         int num;
//         int score;

// };

// bool cmp(const Student left, const Student right);
// {
//         return left.score > return right.score;
// }

// int main(void)
// {
//         int n;
//         scnaf("%d" &n);
//         Student data[101];
//         for(int i = 0; i < N; i++)
//                 {
//                         int a,b,c;
//                         scanf("%d %d %d", &a, &b, &c);
//                         data[i].country = a;
//                         data[i].num = b;
//                         date[i].score = c;
//                 }
//                 sort(data, data + n);
//         int country_count[101] = { 0 };
//         int count = 0;
//         for(int i = 0; i < n; i++)
//                 {
//                         if(country)
//                 }

// #include <cstdio>

// int main(void)

// {
//         int a;
//         int b;

//         scanf("%d %d", &a, &b);

//         printf()

// }

// #include <cstdio>
// #include <algorithm>
// using namespace std;

// const int M = 100100;
//  int m, n, x[M], y[M], X, Y;
// int s;

// int main(void)
// {
//      int i;
//         scanf("%d%d", &n, &m);
//         for(i = 0; i < m; i++)
//                 scanf("%d%d", &x[i], &y[i]);

//         sort(x, x + m);
//         sort(y, y + m);

//         X = x[m / 2];
//         Y = y[m / 2];

//         s = 0;
//         for(int i; i < m; ++i)
//                 s += abs(X - x[i]) + abs(Y - y[i]);

//         printf("%d\n", s);
//         return 0;

// }

// #include <cstdio>
// #include <algorithm>
// using namespace std;
// #define inside(a, b, c) ((a) <= (c) && (c) <= (b))

// int n, m, l;
// int X[1000], Y[1000];
// int FX[1000], FY[1000];

// int main(void)
// {
//         int i, j, k;
//         int w, h;
//         int cnt;
//         int ans = 0;
//         scanf("%d%d%d", &)
// }

// #include <cstdio>
// #include <algorithm>
// #include <cstring>
// using namespace std;
// struct Person{
// char name[11];
// int kor, eng, math;
// };

// bool cmp(const Person u, const Person v)
// {
//         if(u.kor == v.kor) {
//                 return true;
//         }
//         else if(u,kor > v.kor)
//         {

//         }

// #include <cstdio>

// int main(void)
// {
//         printf("%d");
// }

// #include <cstdio>
// int d[1001];

// int main(void)
// {
// 	d[0]=1;
// 	d[1]=1;
// 	int n;
// 	scanf("%d", &n);
// 	for (int i = 2; i <= n; i++)
// 	{
// 		d[i] = d[i - 1] + d[i - 2];
// 		d[i] %= 10007;

// 	}
// 	printf("%d\n", d[n]);
// 	return 0;

// }

// #include <cstdio>
// int a[1001];
// int b[1001];

// int main(void)
// {
//         int n;
//         scanf("%d", &n);
//         for(int i=1; i<=n; i++){
//         scanf("%d", &a[i]);

// }
//         for(int i=1; i<=n; i++)
//                 {
//                         for(int j=1; j<=i; j++)
//                                 {
//                                         if(d[i] <)
//                                 }
//                 }
// // }

// #include <cstdio>
// #include <algorithm>
// using namespace std;

// long long a[100001][2];
// long long b[100001][3];

// int main(void)
// {
//         int t;
//         scanf("%d", &t);
//         while(t--){
//                 int n;
//                 scanf("%d", &n);

//         }
//         for(int i=1; i<=n; i++)
//                 {
//                         scanf("%lld", &a[i][1]);

//                 }
//                 for(int i=1; i<=n; i++)
//                         {
//                                 scanf("%lld", &a[i][1]);

//                         }

//         for(int i=1; i<=n; i++)
//         {
//                  d[i][0] = max(d[i-1][0], max(d[i-1][1], d[i-2][2]));
//                 d[i][2] = max(d[i-1][0], d[i-1][2]) + a[i][0];
//                 d[i][2] = max(d[i-1][0], d[i-1][1]) + a[i][1];
//         }
//         long long ans = 0;
//         ans = max(d[n][0], max(d[i][1], d[i][2]));
//         printf("%lld", ans);

// }

// #include <cstdio>

// int main(void)
// {
//         int w, h, p, q, t;
//         scanf("%d%d%d%d%d", &w, &h, &p, &q, &t);

//         int x,y;
//         x =(p + t) % (w * 2);
//         if (x > w)
//         x = w * 2 - x;

//         y = (q + t) % (w * 2);
//         if(y > h)
//                 y = h * 2 - y;

//         printf("%d %d\n", x,y);

//         return 0;

// // }

// // #include <cstdio>
// // int check[100001];
// // int main(void)
// // {
// //         check[0] = 1;
// //         check[1] = 1;
// //         for(int i=2; i*i <= 1000000; i++)
// //                 {
// //                         if(check[i] == false){
// //                                 for(int j=i*i <= 1000000; i++) {
// //                                         if(check[i] == false){
// //                                                 for(int j=i*i; j <=
// 1000001; j+=i){ check[j] = true;

// //                                                 }
// //                                         }
// //                                 }
// // int m,n;
// // scanf("%d%d", &m, &n);
// // for(int i=m; i <= m; i++){
// //         if(check[i] == false)
// //                 printf("%d\n", i);
// // }                        }
// //                 }
// // }

// #include <cstdio>

// int main(void)
// {
//         int a, b, c, d, e, f;
//         scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f)
// }

// #include <cstdio>
// #include <algorithm>
// #include <vector>

// int n, a[1000000], d[1000001];
// int ans;

// int main(void)
// {
//         int i;
//         scanf("%d", &n);
//         for(i = 0; i < n; i++)
//                 scanf("%d", &a[i]);
//         ans = n;

//         for(i = 0; i < n; i++)
//                 {
//                         d[a[i]] = d[a[i] - 1] + 1;
//                         if(ans > n - d[a[i]])
//                                 ans = n - d[a[i]];

//                 }
//         printf("%d", ans);
//         return 0;
// }

// #include <cstdio>
// #include <algorithm>
// #include <vector>
// #include <queue>
// using namespace std;

// vector<int> a[1001];
// bool check_dfs[1001];
// void dfs(int mode)
// {
//         check_dfs(node) = true;
//         printf("%d", node);
//         for(int i = 0; i < a[node].size(); i++)
//                 {
//                         int next = a[node][i];
//                         if(check_dfs[next] == false)
//                         {
//                                 des(next);
//                         }
//                 }
//         void bfs(int start) {
//                 bool check_bfs[1001] = {0, };
//                 queue<int> q;
//                 check_bfs[start]

//         }

// }

// #include <cstdio>
// #include <vector>
// using namespace std;

// vector<int> a[1001];
// bool check[1001];
// void dfs(int mode){
//         check[mode] = true;
//         for(int i = 0; i < a[mode].size(); i++)
//                 {
//                         int next = (a[mode].size(); i++) {
//                                 int next = a[node][i];
//                                 if (check[next] == false){
//                                         dfs(next);

//                                 }
//                         }
//                 }
//         int  main(){
//                 int n, m;
//                 scanf("%d %d", &n, &m);
//                 for(int i=0; i < m i++)
//                         {
//                                 int u,v;
//                                 scanf("%d %d", &u &v);
//                                 a[v].push.back(u)
//                                 a[u].push.back(v)

//                         }
//                 int ans = 0;
//                 for(int i = 1; i <= n; i++)
//                         {
//                                 if(check[i] == false){
//                                         dfs(i);
//                                         ans++;

//                                 }
//                         }
//                 printf("%d", ans);

//         }
//         return 0;

// }

// #include <algorithm>
// #include <cstdio>
// #include <queue>
// using namespace std;
// int a[30][30];
// int group[30][30];
// int dx[] = {0, 0, 1, -1};
// int dy[] = {1, -1, 0, 0};
// int n;
// int ans[25 * 25];

// void bfs(int x, int y, int cnt) {
//   queue<pair<int, int>> q;
//   q.push(make_pair(x, y));
//   group[x][y] = cnt;
//   while (!q.empty()) {
//     x = q.front().first;
//     y = q.front().second;
//     q.pop();
//     for (int k = 0l k < 4; k++) {
//       int nx = x + dx[k];
//       int ny = y + dy[k];
//       if (0 <= nx && nx < n && 0 <= ny < n)
//     }
//   }
// }

// #include <cstdio>
// #include <algorithm>
// #include <vector>

// using namespace std;

// pair<int , int> student[1000*1000];
// int cnt[1000*1000];

// int main(){
//         int n, m;
//         scanf("%d%d", &n,%m);
//         int index = 0;
//         for(int i = 0; i < n; i++)
//                 {
//                         for(int j = 0; j < m; j++)
//                         {
                                
//                                 int a;
//                                 scanf("%d", &a);
//                                 student[index++] = {a, i}; 
//                         }          
//                 }
//         sort(student, stuent + n * m);
//         int num =0;
//         int s = 0, e = 0;
//         int ans =1234567890;
//         while (e < n * m){
//                 if(cnt[student[e].sencond] == 0)
//                         num++;
//                 cnt[student[e].second]++;
//                 while(num == n) {
//                         ans == min(ans, student[e].first - student[s].first);
// cnt[student[s].second]--;
// if(cnt[student[s].second] == 0)
//         num--;
//         s++;
                
//                 }
//                 e++;              
//         }
//         printf("%d", ans);
//         return 0;
        
        
        
                
//





// #include <algorithm>
// using namespace std;

// int arr[60010];
// int cnt[3010];
// int now;

// void in(int a) {
//         if (!cnt[a])now ++;
//         cnt[a]++;
        
// }

// #include <cstdio>
// #include <algorithm>
// #define X first
// #define Y second
// using namespace std;
// int n,m,t,k,ans_x,ans_y,ans =0;
// pair<int, int> IN[100];

// int Find(int x, int y){
//         int cnt = 0; 
//         for(int i = 0; i < T; i++){
//                 int x,y;
//                 scanf("%d %d", &x, &y);
//                 IN[i] = {x, y};
                
//         }
//         sort(IN, IN + t);
//         int dx[4] = {0, 1, 0, 1};
//         int dy[4] = {0, 0, 1, 1};
//         ans = 1; ans _X = IN[0].Xk ans_y = IN[0].Y;
//         for(int i = 0; i < T; i++){
//                 int x,y;
//                 scanf("%d %d", &x,&y);
//                 IN[i] = {x, y};
                
//         }
        
        
        
// }

// #include <cstdio>
// #include <algorithm>
// #include <vector>

// int main(void)
// {
//         printf("진로쌤 사랑합니다");

//         return 0;

        
// }


// #include <cstdio>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(void)
// {
//         printf("메크로")
// }

// bool find_cycle(int from) {
//     visit[from] = true;

//     if (visit[arr[from]]) return true;
//     return find_cycle(arr[from]);
// }

// int main() {
//     int t;
//     scanf("%d", &t);

//     while(t--) {
//         int n;
//         scanf("%d", &n);


//         for (int i = 1; i <= n; i++) {
//             int num;
//             scanf("%d", &num);

//             arr[i] = num;
//             visit[i] = false;
//         }

//         int answer = 0;
//         for (int i = 1; i <= n; i++) {
//             if (!visit[i]) {
           
//                 if (find_cycle(i)) answer++;
//             }
//         }

//         printf("%d\n", answer);

//     }

//     return 0;
// }

// #include <cstdio>
// #include <cstring>
// #include <queue>
// #include <algorithm>
// using namespace std;

// int w,h,map[52][52];
// int visited;


// void bfs(int a, int b) {
// 	visited[a][b] = true;
// 	queue <pair<int, int>> q;
// 	q.push(make_pair(a, b));

// 	while (!q.empty()) {
// 		int x = q.front().first;
// 		int y = q.front().second;
// 		q.pop();

// 		for (int i = 0; i < 4; i++) {
// 			int nx = x + dx[i];
// 			int ny = y + dy[i];

// 			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
// 			if (!visited[nx][ny] && arr[nx][ny] == 0) {
// 				visited[nx][ny] = true;
// 				cnt[nx][ny] = cnt[x][y] + 1;
// 				if (cnt[nx][ny] > result) result = cnt[nx][ny];
// 				q.push(make_pair(nx, ny));
// 			}
// 		}
// 	}
// }


// int main() {
// 	scanf("%d %d", &n, &m);

// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			char tmp;
// 			scanf(" %1c", &tmp);
// 			if (tmp == 'W') arr[i][j] = 1;
// 		}
// 	}
  
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			if (arr[i][j] == 0) {
// 				memset(visited, 0, sizeof(visited));
// 				memset(cnt, 0, sizeof(cnt));
// 				bfs(i, j);
// 			}
// 		}
// 	}
// 	printf("%d\n", result);
// 	return 0;
// }


// #include <cstdio>
// #include <queue>
// using namespace std;

// const int MAX = 1010;
// int map[MAX][MAX];
// int check[MAX][MAX];
// int dx[4] = {0,0,-1,1};
// int dy[4] = {-1,1,0,0};

// int main()
// {
// 	int m, n;
// 	scanf("%d %d", &m, &n);

// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = 0; j < m; j++)
// 		{
// 			scanf("%d", &map[i][j]);
// 			if(map[i][j] == -1) check[i][j] = -1;
// 		}
// 	}

// 	bool bcheck = true;
// 	//처음 익은 토마토(시작점)를 Queue에 넣는다. 
// 	queue<pair<int, int>> Queue;
// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = 0; j < m; j++)
// 		{
// 			if(map[i][j] == 1)
// 			{
// 				check[i][j] = 1;
// 				Queue.push(make_pair(i,j));
// 				bcheck = false;
// 			}
// 		}
// 	}

	//만약, 저장될 때부터 모든 토마토가 익어있는 상태이면 0 출력
// 	if(bcheck)
// 	{
// 		printf("0");
// 		return 0;
// 	}

// 	while(!Queue.empty())
// 	{
// 		int current_x = Queue.front().first;
// 		int current_y = Queue.front().second;
// 		Queue.pop();
// 		for(int i = 0; i < 4; i++)
// 		{
// 			int next_x = current_x + dx[i];
// 			int next_y = current_y + dy[i];
// 			if(next_x >= 0 && next_x < n && next_y >= 0 && next_y < m)
// 			{
// 				if(map[next_x][next_y] == 0 && check[next_x][next_y] == 0)
// 				{
// 					check[next_x][next_y] = check[current_x][current_y] + 1;
// 					Queue.push(make_pair(next_x, next_y));
// 				}
// 			}
// 		}
// 	}
	

// 	int max= 0;
// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = 0; j < m; j++)
// 		{
// 			if(check[i][j] != -1 && check[i][j] == 0)
// 			{
// 				printf("-1");
// 				return 0;
// 			}
// 			else
// 			{
// 				if(max < check[i][j]) max = check[i][j];
// 			}
// 		}
// 	}
	

// 	printf("%d", max-1);

// 	return 0;
// }



// #include <cstdio>
// #include <queue>
// #include <iostream>
// using namespace std;

// const int MAX = 1010;
// int map[MAX][MAX];
// int check[MAX][MAX];
// int dx[4] = {0,0,-1,1};
// int dy[4] = {-1,1,0,0};

// int main()
// {
// 	int m, n;
// 	scanf("%d %d", &m, &n);

// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = 0; j < m; j++)
// 		{
// 			scanf("%d", &map[i][j]);
// 			if(map[i][j] == -1) check[i][j] = -1;
// 		}
// 	}

// 	bool bcheck = true;
// 	//처음 익은 토마토(시작점)를 Queue에 넣는다. 
// 	queue<pair<int, int>> Queue;
// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = 0; j < m; j++)
// 		{
// 			if(map[i][j] == 1)
// 			{
// 				check[i][j] = 1;
// 				Queue.push(make_pair(i,j));
// 				bcheck = false;
// 			}
// 		}
// 	}

	//만약, 저장될 때부터 모든 토마토가 익어있는 상태이면 0 출력
	// if(bcheck)
	// {
	// 	printf("0");
	// 	return 0;
	// }
	// 	int current_x = Queue.front().first;
	// 	int current_y = Queue.front().second;
	// 	Queue.pop();
	// 	for(int i = 0; i < 4; i++)
	// 	{
	// 		int next_x = current_x + dx[i];
	// 		int next_y = current_y + dy[i];
	// 		if(next_x >= 0 && next_x < n && next_y >= 0 && next_y < m)
	// 		{
	// 			if(map[next_x][next_y] == 0 && check[next_x][next_y] == 0)
	// 			{
	// 				check[next_x][next_y] = check[current_x][current_y] + 1;
	// 				Queue.push(make_pair(next_x, next_y));
	// 			}
	// 		}
	// 	}
	// }
	/*
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			printf("%d ", check[i][j]);
		}
		printf("\n");
	}
// 	*/

// 	int max= 0;
// 	for(int i = 0; i < n; i++)
// 	{
// 		for(int j = 0; j < m; j++)
// 		{
// 			if(check[i][j] != -1 && check[i][j] == 0)
// 			{
// 				printf("-1");
// 				return 0;
// 			}
// 			else
// 			{
// 				if(max < check[i][j]) max = check[i][j];
// 			}
// 		}
// 	}
	

// 	printf("%d", max-1);

// 	return 0;
// }]


// #include <cstdio>
// using namespace std;
// int main(){
//     int N , K;
//     int *coin;
//     scanf("%d %d",&N,&K);
//     coin = new int[N+1];
//     for(int i =1 ;i <=N;i++)scanf("%d",&coin[i]);
//     int cnt =0;
//     while (K>0) {
//         if(K>=coin[N]){
//             K-=coin[N];
//             cnt++;
//         }else{
//             N--;
//         }
//     }
//     printf("%d\n",cnt);
// }

// #include <cstdio>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int main(void)
// {
//         int N,i,n1,n2,min,cnt;

//         scanf("%d", &N);
//         vector <pair <int, int> > v;

        
//     for (i = 0; i < N; i++) {
//         scanf("%d %d", &n1, &n2);
//         v.push_back(make_pair(n1, n2));
//     }
// sort(v.begin(), v.end());
//     sort(v.begin(), v.end() );

//     min = v[0].second;
//     cnt++;

//         for (i = 1; i < N; i++) {
//         if (v[i].first >= min) {
//             min = v[i].second;
//             cnt++;
//         }
//     }
//         printf("%d\n", cnt);
//     return 0;



        
// }
// #include<cstdio>
// #include<vector>
// #include<string>
// #include<cstring>
// using namespace std;

// typedef struct _game {
// 	int number;
// 	int strike;
// 	int ball;
// }Game;

// vector<Game> v;
// bool Can_Number[1000];

// void Init()
// {
// 	memset(Can_Number, true, sizeof(Can_Number));
// 	for (int i = 123; i < 999; i++) {
// 		string tmp = to_string(i);
// 		if (tmp[0] == tmp[1] || tmp[0] == tmp[2] || tmp[1] == tmp[2])
// 			Can_Number[i] = false;
// 		if (tmp[0] - '0' == 0 || tmp[1] - '0' == 0 || tmp[2] - '0' == 0)
// 			Can_Number[i] = false;
// 	}
// }

// int solve()
// { 
// 	int result = 0;
// 	int number;
// 	int strike;
// 	int ball;
// 	string origin;
// 	int tmp_strike = 0;
// 	int tmp_ball = 0;

// 	Init();

// 	for (int i = 0; i < v.size(); i++) {
// 		number = v[i].number;
// 		strike = v[i].strike;
// 		ball = v[i].ball;

// 		origin = to_string(number);

// 		for (int j = 123; j < 999; j++) {

// 			if (Can_Number[j] == true) {
// 				tmp_strike = 0;
// 				tmp_ball = 0;
// 				string tmp = to_string(j);
// 				for (int a = 0; a < 3; a++) {
// 					for (int b = 0; b < 3; b++) {
// 						if (a == b && origin[a] == tmp[b]) tmp_strike += 1;
// 						if (a != b && origin[a] == tmp[b]) tmp_ball += 1;
// 					}
// 				}
// 				if (strike != tmp_strike || ball != tmp_ball) Can_Number[j] = false;
// 			}
// 		}
// 	}
// 	for (int i = 123; i < 999; i++)
// 		if (Can_Number[i] == true) result += 1;
// 	return result;
// }
// int main()
// {
// 	int n;
// 	Game g;
// 	scanf("%d", &n);
// 	for (int i = 0; i < n; i++) {
// 		scanf("%d %d %d", &(g.number), &(g.strike), &(g.ball));
// 		v.push_back(g);
// 	}
// 	printf("%d\n", solve());
// 	return 0;
// }


// #include <cstdio>
// #include <algorithm>

// int N;
// int M;
// int K;

// int main(void)
// {
//         scanf("%d %d %d", &N, &M, &K);

//           int team = n/2 < m ? n/2 : m;
//         int rest = (n+m) - 3*team;
//         k -= rest;

//         if (k > 0) {
//     team -= k%3 == 0 ? k/3 : k/3+1;
//                 }
        
        
// }

// #include <cstdio>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int N, arr[10], min_num, max_num;
// char charr[9];
// bool check

// #include <iostream>
// #include<queue>
// #include<vector>
 
// #define endl "\n"
// #define MAX 20010
// #define INF 987654321
// using namespace std;

// int V, E, Start;
// int Dist[MAX];
// vector<pair<int, int>> Vertex[MAX];

// void Input()
// {
//     cin >> V >> E >> Start;
//     for (int i = 0; i < E; i++)
//     {
//         int a, b, c; cin >> a >> b >> c;
//         Vertex[a].push_back(make_pair(b, c));
//     }
//     for (int i = 1; i <= V; i++) Dist[i] = INF;
// }

// void solution()

// {
//         priority_queue<pair,int
// }

// #include <cstdio>
// #include <iostream>
// #define MAX 9

// int n,m;
// int arr[MAX] = {0,};
// int cout;
// int cin;
// bool visited[MAX] = {0,};



// void dfs(int num, int cnt)
// {
//     if(cnt == m)
//     {
//         for(int i = 0; i < m; i++)
//             cout << arr[i] << ' ';
//         cout << '\n';
//         return;
//     }
//     for(int i = num; i <= n; i++)
//     {
//             visited[i] = true;
//             arr[cnt] = i;
//             dfs(i,cnt+1);
//             visited[i] = false;
//     }
// }

// int main(void)
// {
//         cin >> n >> m;
//         dfs(1,0);
// }

// #include <cstdio>
// #include <vector>

 
// using namespace std;
 
// vector<int> v;
 
// void change(int left, int right)
// {
//     while (1)
//     {
//         swap(v.at(left), v.at(right));
 
//         ++left;
//         --right;
 
//         if (left >= right) break;
//     }
// }
 
// int main(void)
// {
//     for (int i = 1; i <= 20; i++)
//     {
//         v.push_back(i);
//     }
 
//     int left = 0, right = 0;
 
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d %d", &left, &right);
 
//         --left;
//         --right;
 
//         change(left, right);
//     }
 
//     for (auto i : v) printf("%d ", i);
//     printf("\n");
 
//     return 0;
// }


// #include<cstdio>
// #include<vector>

// using namespace std;

// int judge[105][105];

// int main()
// {
// 	int N, M, from, to;

// 	scanf("%d %d", &N, &M);

// 	while(M--)
// 	{
// 		scanf("%d %d", &from, &to);

// 		vector<int> losers, winners;

// 		losers.push_back(from);
// 		winners.push_back(to);

// 		for(int loser=0; loser<=100; loser++)
// 		{
// 			if(judge[loser][from]==-1)
// 			{
// 				losers.push_back(loser);
// 			}
// 		}

// 		for(int winner=0; winner<=100; winner++)
// 		{
// 			if(judge[winner][to]==1)
// 			{
// 				winners.push_back(winner);
// 			}
// 		}

// 		for(int l=0; l<losers.size(); l++)
// 		{
// 			for(int w=0; w<winners.size(); w++)
// 			{
// 				judge[losers[l]][winners[w]]=-1;
// 				judge[winners[w]][losers[l]]=1;
// 			}
// 		}
// 	}

// 	for(int piv=1; piv<=N; piv++)
// 	{
// 		int res=0;
// 		for(int k=1; k<=N; k++)
// 			if(judge[piv][k]!=0)
// 				res++;

// // 		printf("%d\n", N-res-1);
// // 	}


// // 	return 0;
// // }
// #include <stdio.h>

// int A,B,C;

// long long int f(long long int y){
// 	if(y==1) return A%C;
	
// 	long long int k = f(y/2)%C;
	
// 	if(y%2==0) return k*k%C;
// 	else return k*k%C*A%C;
// }

// int main(){
// 	scanf("%d %d %d",&A,&B,&C);
	
// 	printf("%lld\n",f(B));
	
// 	return 0;
// }



// #include <cstdio>
// #include <queue>
 
// using namespace std;
 
// vector<int> vc[32001];
// int line[32001];
 
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
 
//     for (int i = 0; i < m; i++)
//     {
//         int cur, prev;

//         scanf("%d %d", &prev, &cur);
 
//         line[cur]++;
//         vc[prev].push_back(cur);
//     }
 
//     int result[32001];
//     queue<int> q;
 
//     for (int i = 1; i <= n; i++)
//         if (line[i] == 0)
//             q.push(i);
 
//     for (int i = 0; i < n; i++)
//     {
//         if (q.empty())
//         {
//             printf("0");
//             return 0;
//         }
 
//         int cur = q.front();
//         q.pop();
 
//         result[i] = cur;
 
//         for(int j = 0 ; j < vc[cur].size(); j++)
//         {
//             int next = vc[cur][j];
//             if (--line[next] == 0)
//                 q.push(next);
//         }
        
//     }
//         for (int i = 0; i < n; i++)
//             printf("%d ", result[i]);
//     return 0;
// }

#include <cstdio>

int main(void)
{
	printf("10kbill");
	return 0;
}