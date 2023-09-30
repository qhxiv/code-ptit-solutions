#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n, x;
	cin >> n;
	vector<ll> v;
	while (n--) {
		ll y;
		cin >> y;
		v.push_back(y);
	}
	cin >> x;
	for (ll y : v)
		if (y!=x)
			cout << y << " ";
	return 0;
}