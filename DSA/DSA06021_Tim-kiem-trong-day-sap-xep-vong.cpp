#include <bits/stdc++.h>

using namespace std;

int bs(int a[], int l, int r, int x) {
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m]==x)
			return m;
		else if (a[m]<x) l = m + 1;
		else r = m - 1;
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		int a[n], l = -1, p = -1;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i]<l) p = i;
			l = a[i];
		}
		if (p==-1) p = n;
		p--;
		l = bs(a, 0, p, x);
		if (l!=-1)
			cout << l+1;
		else cout << bs(a, p+1, n-1, x)+1;
		cout << endl;
	}
	return 0;
}