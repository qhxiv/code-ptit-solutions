#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, y;
		cin >> n >> y;
		int a[n];
		for (int &x : a) cin >> x;
		if (binary_search(a, a+n, y))
			cout << 1;
		else cout << -1;
		cout << endl;
	}
	return 0;
}