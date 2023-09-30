#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k, ok, a[100];

void ktao() {
	ok = 1;
	for (int i=1;i<=n;i++)
		a[i] = 0;
}

void in() {
	int sum = 0;
	for (int i=1;i<=n;i++)
		sum += a[i];
	if (sum==k) {
		for (int i=1;i<=n;i++)
			cout << a[i];
		cout << endl;
	}
}

void sinh() {
	int i = n;
	while (a[i]==1 && i>=1) {
		a[i] = 0;
		i--;
	}
	if (i==0)
		ok = 0;
	else a[i] = 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		ktao();
		while (ok) {
			in();
			sinh();
		}
	}
	return 0;
}