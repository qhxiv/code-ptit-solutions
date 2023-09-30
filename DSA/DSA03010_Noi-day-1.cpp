#include <bits/stdc++.h>
#define ll long long

using namespace std;

int last_pos(ll a[], int l, int r, ll x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m]<x) {
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
		int n; cin >> n;
		ll a[n];
		for (ll &x : a) cin >> x;
		sort(a, a+n);
		ll sum = 0;
		for (int i=1;i<n;i++) {
			a[i] += a[i-1];
			sum += a[i];
			int j = last_pos(a, i+1, n-1, a[i]);
			if (j!=-1) {
				ll tmp = a[i];
				for (int k=i;k<j;k++)
					a[k] = a[k+1];
				a[j] = tmp;
			}
		}
		cout << sum << endl;
	}
	return 0;
}