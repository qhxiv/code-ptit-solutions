#include <bits/stdc++.h>

using namespace std;

int n, k, ok = 1;
char a[100];

void sinh() {
	int i = n;
	while (i>=1 && a[i]=='B') {
		a[i] = 'A';
		i--;
	}
	if (i==0)
		ok = 0;
	else a[i] = 'B';
}

bool check() {
	int l = 0, cnt = 0;
	for (int i=1;i<=n;i++) {
		if (a[i]=='A')
			l++;
		else {
			if (l==k)
				cnt++;
			l = 0;
		}
	}
	if (l==k)
		cnt++;
	return cnt == 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (int i=1;i<=n;i++)
		a[i] = 'A';
	vector<vector<char>> v;
	while (ok) {
		if (check()) {
			vector<char> x(a+1, a+n+1);
			v.push_back(x);
		}
		sinh();
	}
	cout << v.size() << endl;
	for (auto x : v) {
		for (char y : x)
			cout << y;
		cout << endl;
	}
	return 0;
}