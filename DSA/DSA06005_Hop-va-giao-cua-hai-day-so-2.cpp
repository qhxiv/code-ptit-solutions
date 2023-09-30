#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, m, x;
		cin >> n >> m;
		set<int> a, b, in, un;
		while (n--) {
			cin >> x;
			a.insert(x);
			in.insert(x);
		}
		while (m--) {
			cin >> x;
			b.insert(x);
			in.insert(x);
		}
		for (int x : a) {
			if (b.count(x)==1)
				un.insert(x);
		}
		for (int x : b) {
			if (a.count(x)==1)
				un.insert(x);
		}
		for (int x : in)
			cout << x << " ";
		cout << endl;
		for (int x : un)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}