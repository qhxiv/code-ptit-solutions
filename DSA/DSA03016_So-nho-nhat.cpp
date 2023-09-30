#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int s, d;
		cin >> s >> d;
		int res[d] = {0};
		if (9*d < s) cout << -1;
		else {
			int r = s/9;
			if (r==d) fill(res, res+d, 9);
			else {
				fill(res + d - r, res + d, 9);
				s -= 9*r;
				if (s==0) {
					res[d-r]--;
					res[0] = 1;
				} else {
					res[0] = 1;
					res[d-r-1] = s - 1;
				} 
			}
			for (int x : res) cout << x;
		}
		cout << endl;
	}
	return 0;
}