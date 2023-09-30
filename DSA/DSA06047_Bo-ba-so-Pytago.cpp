#include <bits/stdc++.h>
#define ll long long

using namespace std;

int first_pos(ll a[], int l, int r, ll x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m] == x) {
			res = m;
			r = m - 1;
		} else if (a[m] > x) r = m - 1;
		else if (a[m] < x) l = m + 1;
	}
	return res;
}

int last_pos(ll a[], int l, int r, ll x) {
	int res = -1;
	while (l<=r) {
		int m = (l+r)/2;
		if (a[m] == x) {
			res = m;
			l = m + 1;
		} else if (a[m] > x) r = m - 1;
		else if (a[m] < x) l = m + 1;
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
		bool ok = 0;
		for (int i=0;i<=n-3;i++) {
			for (int j=i+1;j<=n-2;j++) {
				ll c = a[i]*a[i] + a[j]*a[j];
				ll csr = sqrt(a[i]*a[i] + a[j]*a[j]);
				int l = first_pos(a, j+1, n-1, csr);
				int r = last_pos(a ,j+1, n-1, csr);
				if (l!=-1)
					for (int k=l;k<=r;k++)
						if (a[k]*a[k]==c) {
							ok = 1;
							break;
						}
				if (ok)
					break;
			}
			if (ok)
				break;
		}
		if (ok)
			cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}