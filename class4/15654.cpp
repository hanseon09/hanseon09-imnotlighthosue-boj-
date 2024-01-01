#include<iostream>
#include<algorithm>
using namespace std;
int a[9];
int c[9]; // 정답 수열
bool b[9]; // b[i] == true 이면 a[i]가 이미 사용됐음
void go(int index, int n, int m) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << c[i];
			if (i != m - 1) cout << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < n; i++) {
		if (b[i]) continue; // a[i]가 사용됐으면 넘어감
		c[index] = a[i];
		b[i] = true;
		go(index + 1, n, m);
		b[i] = false;
	}
}
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	go(0, n, m);
}