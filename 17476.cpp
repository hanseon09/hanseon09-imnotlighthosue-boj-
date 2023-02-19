#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using pii = pair<int, int>;

struct node {
	ll lo, hi, sum, ladd, lsqrt;

	node operator+(const node &o) const {
		return {min(lo, o.lo), max(hi, o.hi), sum + o.sum, 0, 0};
	}
};

struct seg {
	vector<node> tree;

	void push(int x, int s, int e) {
		if (tree[x].lsqrt) {
			tree[x].lo = tree[x].hi = tree[x].lsqrt;
			tree[x].sum = tree[x].lo * (e - s + 1);
			if (s != e) {
				tree[x*2].lsqrt = tree[x*2+1].lsqrt = tree[x].lsqrt;
				tree[x*2].ladd = tree[x*2+1].ladd = 0;
			}
		}
		if (tree[x].ladd) {
			tree[x].lo += tree[x].ladd;
			tree[x].hi += tree[x].ladd;
			tree[x].sum += tree[x].ladd * (e - s + 1);
			if (s != e) {
				if (!tree[x].lsqrt) {
					tree[x*2].ladd += tree[x].ladd;
					tree[x*2+1].ladd += tree[x].ladd;
				} else
					tree[x*2].ladd = tree[x*2+1].ladd = tree[x].ladd;
			}
		}
		tree[x].ladd = tree[x].lsqrt = 0;
	}

	node init(int x, int s, int e, const vector<int> &a) {
		if (s == e)
			return tree[x] = {a[s], a[s], a[s], 0, 0};
		else {
			const int m = (s + e) / 2;
			return tree[x] = init(x*2, s, m, a) + init(x*2+1, m+1, e, a);
		}
	}

	void add(int x, int s, int e, int l, int r, int v) {
		push(x, s, e);
		if (e < l || r < s)
			return;
		if (l <= s && e <= r) {
			tree[x].ladd = v;
			push(x, s, e);
			return;
		}
		const int m = (s + e) / 2;
		add(x*2, s, m, l, r, v);
		add(x*2+1, m+1, e, l, r, v);
		tree[x] = tree[x*2] + tree[x*2+1];
	}

	void sqrt(int x, int s, int e, int l, int r) {
		push(x, s, e);
		if (e < l || r < s || tree[x].hi == 1)
			return;
		if (l <= s && e <= r) {
			const auto f = [] (ll k) -> ll { return floor(::sqrt(k)); };
			if (f(tree[x].lo) == f(tree[x].hi)) {
				tree[x].lsqrt = f(tree[x].lo);
				push(x, s, e);
				return;
			} else if (tree[x].lo + 1 == tree[x].hi) {
				tree[x].ladd = f(tree[x].hi) - tree[x].hi;
				push(x, s, e);
				return;
			}
		}
		const int m = (s + e) / 2;
		sqrt(x*2, s, m, l, r);
		sqrt(x*2+1, m+1, e, l, r);
		tree[x] = tree[x*2] + tree[x*2+1];
	}

	node get(int x, int s, int e, int l, int r) {
		push(x, s, e);
		if (e < l || r < s)
			return node{(ll)1e18,};
		if (l <= s && e <= r)
			return tree[x];
		const int m = (s + e) / 2;
		return get(x*2, s, m, l, r) + get(x*2+1, m+1, e, l, r);
	}
};

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &x : a)
		cin >> x;

	seg st;
	st.tree.resize(1 << (int)ceil(log2(n)+1));
	st.init(1, 0, n-1, a);

	int m;
	cin >> m;
	while (m--) {
		int q, l, r, x;
		cin >> q >> l >> r;
		l--, r--;
		if (q == 1) {
			cin >> x;
			if (x == 0)
				continue;
			st.add(1, 0, n-1, l, r, x);
		} else if (q == 2)
			st.sqrt(1, 0, n-1, l, r);
		else
			cout << st.get(1, 0, n-1, l, r).sum << '\n';
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	int t; cin >> t;
//	while (t--)
		solve();
	return 0;
}