#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, x, cnt = 0;
		cin >> n >> x;
		while (n--) {
			int y;
			cin >> y;
			if (y==x)
				cnt++;
		}
		if (!cnt)
			cout << -1;
		else cout << cnt;
		cout << endl;
	}
	return 0;
}