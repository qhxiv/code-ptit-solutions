#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		set<char> s;
		while (n--) {
			string st; cin >> st;
			for (char x : st)
				s.insert(x);
		}
		for (char x : s)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}