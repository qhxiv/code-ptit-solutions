#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n, cnt[100] = {0}, m = -1; cin >> n;
		string s; cin >> s;
		for (char x : s) {
			cnt[x - 'A']++;
			m = max(m, cnt[x - 'A']);
		}
		int k = s.size() - (n-1)*(m-1);
		if (k >= m)
			cout << 1;
		else cout << -1;
		cout << endl;
	}
	return 0;
}