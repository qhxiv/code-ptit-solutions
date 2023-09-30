#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		pair<int, int> a[n];
		for (auto &x : a) {
			cin >> x.first >> x.second;
		}
		sort(a, a+n, cmp);
		int cnt = 0, l = -1;
		for (int i=0;i<n;i++) {
			if (a[i].first >= l) {
				l = a[i].second;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}