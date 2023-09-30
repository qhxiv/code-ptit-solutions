#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		int sum = 0;
		vector<int> v;
		for (int i=0;i<s.size();i++) {
			if (s[i]>='0'&&s[i]<='9') {
				sum += s[i] - '0';
			} else {
				v.push_back((int)s[i]);
			}
		}
		sort(v.begin(), v.end());
		for (int x : v) {
			cout << (char)x;
		}
		cout << sum << endl;
	}
	return 0;
}
