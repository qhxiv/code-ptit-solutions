#include <bits/stdc++.h>

using namespace std;

string s;
char a[100];
int n, b[100], used[100];

void result() {
	for (int i=1;i<=n;i++)
		cout << a[b[i]];
	cout << ' ';
}

void Try(int i) {
	for (int j=1;j<=n;j++) {
		if (!used[j]) {
			b[i] = j;
			used[j] = 1;
			if (i==n)
				result();
			else Try(i+1);
			used[j] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		cin >> s;
		n = s.size();
		fill(used+1, used+n+1, 0);
		for (int i=1;i<=n;i++) a[i] = s[i-1];
		Try(1);
		cout << endl;
	}
	return 0;
}