#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		queue<int> q;
		int n; cin >> n;
		while (n--) {
			int x; cin >> x;
			if (x==1) cout << q.size() << endl;
			else if (x==2) {
				if (q.empty()) cout << "YES" << endl;
				else cout << "NO" << endl;
			} else if (x==3) {
				int y; cin >> y;
				q.push(y);
			} else if (x==4) {
				if (!q.empty()) q.pop();
			} else if (x==5) {
				if (q.empty()) cout << -1 << endl;
				else cout << q.front() << endl;
			} else if (x==6) {
				if (q.empty()) cout << -1 << endl;
				else cout << q.back() << endl;
			}
		}
	}
	return 0;
}