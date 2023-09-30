#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	ll a[100];
	a[1] = 1;
	for (int i=2;i<=50;i++) a[i] = a[i-1]*2 + 1;
	int t; cin >> t;
	while (t--) {
		ll n, res, k;
		cin >> n >> k;
		while (n>1) {
			if (k==a[n-1]+1) {
				res = n;
				break;
			} else if (k>a[n-1]+1) {
				k -= a[n-1]+1;
				n--;
			} else n--;
		}
		if (n==1)
			res = 1;
		cout << res << endl;
	}
	return 0;
}