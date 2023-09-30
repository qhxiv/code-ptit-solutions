#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		ll k;
		string s;
		cin >> k >> s;
		multiset<ll> se;
		map<char, ll> mp;
		for (char x : s) mp[x]++;
		for (auto x : mp) se.insert(x.second);
		while (k--) {
			int tmp = *se.rbegin();
			se.erase(se.find(tmp));
			se.insert(tmp-1);
		}
		ll res = 0;
		for (ll x : se) res += pow(x, 2);
		cout << res << endl;
	}
	return 0;
}