#include <iostream>
#include <set>

using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n, x; cin >> n >> x;
		set<int> s;
		for (int i=0;i<n;i++) {
			int y; cin >> y;
			s.insert(y);
		}
		bool check = 1;
		for (auto y : s) {
			if (s.count(y+x)==1) {
				cout << 1;
				check = 0;
				break;
			}
		}
		if (check)
			cout << -1;
		cout << endl;
	}
	return 0;
}

