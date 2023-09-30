#include <bits/stdc++.h>

using namespace std;

int first_pos(int a[], int l, int r, int x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m] < x) {
			res = m;
			r = m - 1;
		} else r = m - 1;
	}
	return res;
}

int last_pos(int a[], int l, int r, int x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m] < x) {
			res = m;
			l = m + 1;
		} else r = m - 1;
	}
	return res;
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
		sort(a, a+n);
		int l = first_pos(a, 0, n-3, k);
		int r = last_pos(a, 0, n-3, k);
		bool ok = 0;
		if (l!=-1) {
			for (int i=l;i<=r;i++) {
				int x = first_pos(a, i+1, n-2, k-a[i]);
				int y = last_pos(a, i+1, n-2, k-a[i]);
				if (x!=-1) {
					for (int j=x;j<=y;j++) {
						ok = binary_search(a+j+1, a+n, k-a[i]-a[j]);
						if (ok)
							break;
					}
				}
				if (ok)
					break;
			}
		}
		if (ok)
			cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}