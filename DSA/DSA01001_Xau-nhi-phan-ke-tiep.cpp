#include <bits/stdc++.h>
#define ll long long

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
		while (s[i]=='1' && i>=1) {
			s[i] = '0';
			i--;
		}
		if (i==0) {
			for (int j=1;j<=n;j++)
				cout << 0;
		} else {
			s[i] = '1';
			s.erase(0, 1);
			cout << s;
		}
		cout << endl;
	}
	return 0;
}