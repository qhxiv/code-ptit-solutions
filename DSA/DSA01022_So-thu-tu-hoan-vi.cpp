#include <bits/stdc++.h>

using namespace std;

int a[100], b[100], ok, n, cnt;

void ktao() {
	ok = 1;
	cnt = 1;
	for (int i=1;i<=n;i++)
		a[i] = i;
}

void sinh() {
	int i = n-1;
	while (a[i]>a[i+1] && i>=1)
		i--;
	if (i==0)
		ok = 0;
	else {
		int j = n;
		while (a[j]<a[i])
			j--;
		swap(a[i], a[j]);
		reverse(a+i+1, a+n+1);
	}
	cnt++;
}

bool check() {
	for (int i=1;i<=n;i++)
		if (a[i]!=b[i])
			return 0;
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		cin >> n;
		for (int i=1;i<=n;i++)
			cin >> b[i];
		ktao();
		while (ok) {
			if (check()) {
				cout << cnt << endl;
				break;
			}
			sinh();
		}
	}
	return 0;
}