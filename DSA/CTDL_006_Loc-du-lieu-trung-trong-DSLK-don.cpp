#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll n;
	cin >> n;
	set<ll> s;
	vector<ll> v;
	ll y;
	cin >> y;
	s.insert(y);
	v.push_back(y);
	n--;
	while (n--) {
		cin >> y;
		if (s.count(y)==0) {
			s.insert(y);
			v.push_back(y);
		}
	}
	for (ll y : v)
		cout << y << " ";
	return 0;
}