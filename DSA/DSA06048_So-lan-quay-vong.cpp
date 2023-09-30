#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n], res = 0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (i>0 && a[i]<a[i-1])
				res = i;
		}
		cout << res << endl;
	}
	return 0;
}