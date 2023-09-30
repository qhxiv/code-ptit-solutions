#include <bits/stdc++.h>

using namespace std;

bool p[1000001];

void sieve() {
	for (int i=2;i<=1000000;i++)
		p[i] = 1;
	for (int i=2;i<=1000;i++) {
		if (p[i]) {
			for (int j=i*i;j<=1000000;j+=i)
				p[j] = 0;
		}
	}
}

void solve(int n) {
	for (int i=2;i<=n/2;i++)
		if (p[i] && p[n-i]) {
			cout << i << " " << n-i << endl;
			return;
		}
	cout << -1 << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	sieve();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		solve(n);
	}
	return 0;
}