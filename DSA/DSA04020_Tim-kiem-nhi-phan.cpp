#include <bits/stdc++.h>

using namespace std;

int bs(int a[], int l, int r, int x) {
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m]==x)
			return m;
		else if (a[m]<x)
			l = m + 1;
		else r = m - 1;
	}
	return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int &x : a) cin >> x;
		int i = bs(a, 0, n-1, k);
		if (i)
			cout << i + 1;
		else cout << "NO";
		cout << endl;
	}
	return 0;
}