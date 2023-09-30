#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s1, s2;
		getline(cin, s1);
		getline(cin, s2);
		stringstream ss2(s2);
		string tmp;
		set<string> a, b;
		stringstream ss1(s1);
		while (ss1 >> tmp) {
			a.insert(tmp);
		}
		while (ss2 >> tmp) {
			b.insert(tmp);
		}
		for (string x : a) {
			if (b.count(x) == 0)
				cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
