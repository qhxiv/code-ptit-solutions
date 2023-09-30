#include <bits/stdc++.h>

using namespace std;

int n, k, a[1000][1000], b[1000], ok = 1;

void ktao() {
	for (int i=1;i<=n;i++)
		b[i] = i;
}

bool check() {
	int s = 0;
	for (int i=1;i<=n;i++) {
		s += a[i][b[i]];
	}
	return s == k;
}

void sinh() {
	int i = n-1;
	while (b[i]>b[i+1] && i>=1)
		i--;
	if (i==0)
		ok = 0;
	else {
		int j = n;
		while (b[j] < b[i])
			j--;
		swap(b[i], b[j]);
		reverse(b+i+1, b+n+1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			cin >> a[i][j];
		vector<vector<int>> v;
	ktao();
	while (ok) {
		if (check()) {
			vector<int> x(b+1, b+n+1);
			v.push_back(x);
		}
		sinh();
	}
	cout << v.size() << endl;
	for (auto x : v) {
		for (int y : x) {
			cout << y << ' ';
		}
		cout << endl;
	}
	return 0;
}