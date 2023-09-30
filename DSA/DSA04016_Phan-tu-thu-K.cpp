#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int a[n], b[m];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		int i, j, z;
		z = i = j = 0;
		while (k--) {
			if (a[i]<b[j]) {
				z = 0;
				i++;
			} else {
				z = 1;
				j++;
			}
		}
		if (z)
			cout << b[j-1];
		else cout << a[i-1];
		cout << endl;
	}
	return 0;
}