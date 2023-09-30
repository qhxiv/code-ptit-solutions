#include <iostream>
#include <set>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		int count[100001] = {0};
		set<int> s;
		for (int i=0;i<n;i++) {
			int x; cin >> x;
			s.insert(x);
			count[x]++;
		}
		for (int i=0;i<m;i++) {
			int x; cin >> x;
			s.insert(x);
			count[x]++;
		}
		for (auto x : s)
			cout << x << " ";
		cout << endl;
		for (int i=0;i<=100000;i++) {
			if (count[i]==2)
				cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}

