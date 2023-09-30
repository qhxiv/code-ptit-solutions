#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, s, m;
		cin >> n >> s >> m;
		int r = m * s;
		int res = r / n;
		if (r%n!=0) res++;
		if (n < m || (s>6 && (n-m)*6 < m))
			cout << -1;
		else cout << res;
		cout << endl;
	}
	return 0;
}