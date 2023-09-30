#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n], b[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b+n);
		bool ok = 1;
		for (int i=0;i<=n/2;i++) {
			set<int> s1, s2;
			s1.insert({a[i], a[n-i-1]});
			s2.insert({b[i], b[n-i-1]});
			if (s1 != s2) {
				ok = 0;
				break;
			}
		}
		if (ok)
			cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}