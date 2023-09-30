#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int res, tmp = 1e9;
		for (int i=0;i<n-1;i++)
			for (int j=i+1;j<n;j++)
				if (abs(a[i]+a[j])<tmp) {
					tmp = abs(a[i]+a[j]);
					res = a[i] + a[j];
				}
		cout << res << endl;
	}
	return 0;
}