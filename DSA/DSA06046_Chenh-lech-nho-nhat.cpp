#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, m = 1e9+1; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		sort(a, a+n);
		for (int i=0;i<n-1;i++) {
			m = min(m, a[i+1] - a[i]);
		}
		cout << m << endl;
	}
	return 0;
}