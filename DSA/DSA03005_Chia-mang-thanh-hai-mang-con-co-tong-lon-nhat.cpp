#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		k = min(k, n-k);
		ll a[n];
		for (ll &x : a) cin >> x;
		sort(a, a+n);
		ll s1, s2;
		s1 = s2 = 0;
		for (int i=0;i<n;i++) {
			if (i<k)
				s1 += a[i];
			else s2 += a[i];
		}
		cout << s2 - s1 << endl;
	}
	return 0;
}