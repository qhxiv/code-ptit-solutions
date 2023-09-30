#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int n = s.size();
		s = '$' + s;
		int i = n;
		while (s[i]=='0' && i>=1) {
			s[i] = '1';
			i--;
		}
		if (i!=0)
			s[i] = '0';
		s.erase(0, 1);
		cout << s << endl;
	}
	return 0;
}