#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, tmp = 1; cin >> n;
		ll a[n], b, c;
		for (ll &x : a) cin >> x;
		sort(a, a+n);
		b = c = 0;
		for (ll x : a) {
			if (tmp==1) {
				b *= 10;
				b += x;
			} else {
				c *= 10;
				c += x;
			}
			tmp *= -1;
		}
		cout << b + c << endl;
	}
	return 0;
}