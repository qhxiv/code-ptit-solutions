#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	ll res = 0;
	while (n--) {
		ll x ; cin >> x;
		if (x>0) res += 2*x;
	}
	cout << res;
	return 0;
}