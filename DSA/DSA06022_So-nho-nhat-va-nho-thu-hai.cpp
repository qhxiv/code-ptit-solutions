#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		map<int, int> mp;
		while (n--) {
			int x; cin >> x;
			mp[x]++;
		}
		if (mp.size()<2)
			cout << -1;
		else {
			auto it = mp.begin();
			cout << (*it).first << " " << (*next(it)).first;
		}
		cout << endl;
	}
	return 0;
}