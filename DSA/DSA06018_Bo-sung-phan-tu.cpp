#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n;
		int l=1e7, r = -1;
		int cnt[100001] = {0};
		while (n--) {
			cin >> x;
			cnt[x] = 1;
			l = min(l, x);
			r = max(r, x);
		}
		int count = 0;
		for (int i=l;i<=r;i++) {
			if (!cnt[i])
				count++;
		}
		cout << count << endl;
	}
	return 0;
}