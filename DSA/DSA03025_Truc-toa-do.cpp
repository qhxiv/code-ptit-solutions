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
		pair<int,int> a[n];
		for (auto &x : a) cin >> x.first >> x.second;
		sort(a, a+n, cmp);
		int cnt = 0, l = -1;
		for (auto x : a) {
			if (x.first >= l) {
				l = x.second;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}