#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	string s = "1";
	int b[11]; b[1] = 1;
	for (int i=2;i<=10;i++) {
		b[i] = b[i-1]*2 + 1;
		s = s + char(i + '0');
		s = s + s.substr(0, s.size()-1);
	}
	s = '$' + s;
	int t; cin >> t;
	while (t--) {
		string x, a = ""; cin >> x;
		for (int i=0;i<x.size();i++) a = a + '0';
		if (x==a) cout << x;
		else {
			int n = x.size();
			reverse(x.begin(), x.end());
			x = '$' + x;
			a = '$' + a;
			string c = a;
			for (int i=1;i<=b[n];i++) {
				int j = s[i] - '0';
				if (a[j]=='0') a[j] = '1';
				else a[j] = '0';
				j = n;
				while (c[j]=='1') {
					c[j] = '0';
					j--;
				}
				c[j] = '1';
				if (x==a) break;
			}
			cout << c.substr(1, n);
		}
		cout << endl;
	}
	return 0;
}