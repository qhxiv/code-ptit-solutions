#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		map<int, int> mp;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			mp[x]++;
		}
		vector<pair<int, int>> v(mp.begin(), mp.end());
		sort(v.begin(), v.end(), cmp);
		if (v[0].second > n/2)
			cout << v[0].first;
		else cout << "NO";
		cout << endl;
	}
	return 0;
}