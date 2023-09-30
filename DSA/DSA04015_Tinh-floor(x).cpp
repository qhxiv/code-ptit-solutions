#include <bits/stdc++.h>
#define ll long long

using namespace std;

int last_pos(ll a[], int l, int r, ll x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m]<=x) {
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
		int n, x; cin >> n >> x;
		ll a[n];
		for (ll &y : a) cin >> y;
		int i = last_pos(a, 0, n-1, x);
		if (i!=-1) i++;
		cout << i << endl;
	}
	return 0;
}