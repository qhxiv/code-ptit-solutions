#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n]; bool ok = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}
		int res = -1;
		for (int i=n-1;i>=1;i--) {
			int j = 0;
			bool ok = 0;
			while (j+i<n) {
				if (a[j]<a[j+i]) {
					ok = 1;
					break;
				}
				j++;
			}
			if (ok) {
				res = i;
				break;
			}
		}
		cout << res << endl;
	}
	return 0;
}