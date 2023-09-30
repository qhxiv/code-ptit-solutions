#include <bits/stdc++.h>

using namespace std;

int first_pos(int a[], int l, int r, int x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m]==x) {
			res = m;
			r = m - 1;
		} else if (a[m]>x)
			r = m - 1;
		else l = m + 1;
	}
	return res;
}

int last_pos(int a[], int l, int r, int x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m]==x) {
			res = m;
			l = m + 1;
		} else if (a[m]>x)
			r = m - 1;
		else l = m + 1;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int l = first_pos(a, 0, n-1, 0);
		int r = last_pos(a, 0, n-1, 0);
		if (l==-1)
			cout << 0;
		else cout << r - l + 1;
		cout << endl;
	}
	return 0;
}