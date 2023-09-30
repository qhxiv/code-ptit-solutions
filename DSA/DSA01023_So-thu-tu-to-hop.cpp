#include <bits/stdc++.h>

using namespace std;

int n, k, a[100], b[100], ok, cnt;

void ktao() {
	ok = cnt = 1;
	for (int i=1;i<=k;i++)
		a[i] = i;
}

void sinh() {
	int i=k;
	while (a[i]==i+n-k && i>=1)
		i--;
	if (i==0)
		ok = 0;
	else {
		a[i]++;
		for (int j=i+1;j<=k;j++)
			a[j] = a[j-1] + 1;
	}
	cnt++;
}

bool check() {
	for (int i=1;i<=k;i++)
		if (a[i]!=b[i])
			return 0;
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		for (int i=1;i<=k;i++)
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