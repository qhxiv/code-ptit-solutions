#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool cmp(pair<ll, ll> a, pair<ll, ll> b) {
	return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		pair<ll, ll> a[n];
		for (int i=0;i<n;i++) cin >> a[i].first;
		for (int i=0;i<n;i++) cin >> a[i].second;
		sort(a, a+n, cmp);
		ll last = -1e9, cnt = 0;
		for (int i=0;i<n;i++) {
			if (last<=a[i].first) {
				cnt++;
				last = a[i].second;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}