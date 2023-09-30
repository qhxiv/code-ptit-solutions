#include <bits/stdc++.h>

using namespace std;

int n, a[100], ok, cnt;

void sinh() {
	int i = cnt;
	while (a[i]==1 && i>=1)
		i--;
	if (i==0)
		ok = 0;
	else {
		a[i]--;
		int d = cnt - i + 1;
		cnt = i;
		int m = d/a[i];
		int r = d%a[i];
		if (m) {
			for (int j=0;j<m;j++) {
				cnt++;
				a[cnt] = a[i];
			}
		}
		if (r) {
			cnt++;
			a[cnt] = r;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		cin >> n;
		a[1] = n;
		cnt = 1;
		ok = 1;
		while (ok) {
			cout << '(';
			for (int i=1;i<=cnt;i++) {
				cout << a[i];
				if (i<cnt)
					cout << ' ';
			}
			cout << ") ";
			sinh();
		}
		cout << endl;
	}
	return 0;
}