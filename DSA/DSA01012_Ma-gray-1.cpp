#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	string s = "1";
	int b[20+1]; b[1] = 1;
	for (int i=2;i<=10;i++) {
		b[i] = b[i-1]*2 + 1;
		s = s + char(i + '0');
		s = s + s.substr(0, s.size()-1);
	}
	s = '$' + s;
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n+1] = {0};
		for (int i=0;i<n;i++) cout << 0;
		cout << ' ';
		for (int i=1;i<=b[n];i++) {
			int j = s[i] - '0';
			if (a[j]==0) a[j] = 1;
			else a[j] = 0;
			for (int k=n;k>=1;k--) cout << a[k];
			cout << ' ';
		}
		cout << endl;
	}
	return 0;
}