#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		bool ok;
		int cnt = 0;
		vector<vector<int>> v;
		while (1) {
			cnt++;
			ok = 1;
			for (int i=0;i<n-1;i++) {
				if (a[i]>a[i+1]) {
					swap(a[i], a[i+1]);
				}
			}
			for (int i=0;i<n-1;i++) {
				if (a[i]>a[i+1])
					ok = 0;
			}
			vector<int> x(a, a+n);
			v.push_back(x);
			if (ok)
				break;
		}
		n = v.size();
		reverse(v.begin(), v.end());
		for (auto x : v) {
			cout << "Buoc " << n << ": ";
			for (int y : x)
				cout << y << ' ';
			cout << endl;
			n--;
		}
	}
	return 0;
}