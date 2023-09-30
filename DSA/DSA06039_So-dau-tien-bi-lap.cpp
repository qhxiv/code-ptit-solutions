#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a;
		map<int, int> mp;
		while (n--) {
			int x; cin >> x;
			a.push_back(x);
			mp[x]++;
		}
		bool y = 1;
		for (int x : a) {
			if (mp[x]>1) {
				cout << x;
				y = 0;
				break;
			}
		}
		if (y)
			cout << "NO";
		cout << endl;
	}
	return 0;
}