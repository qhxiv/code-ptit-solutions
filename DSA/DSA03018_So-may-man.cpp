#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a = n/7;
		n -= a*7;
		while (n%4!=0 && a>0) {
			a--;
			n += 7;
		}
		if (n%4!=0) cout << -1;
		else {
			for (int i=0;i<n/4;i++) cout << 4;
			while (a--) cout << 7;
		}
		cout << endl;
	}
	return 0;
}