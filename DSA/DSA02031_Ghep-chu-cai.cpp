#include <bits/stdc++.h>

using namespace std;

char c, a[100], n;
bool used[100];

bool check() {
	if (c<'E') {
		return (a[1]=='A' || a[n]=='A');
	} else {
		bool ok1, ok2;
		ok1 = (a[1]=='A' && a[n]=='E') || (a[1]=='E' && a[n]=='A');
		ok2 = 0;
		for (int i=1;i<n;i++) {
			if ((a[i]=='A'&&a[i+1]=='E') || (a[i]=='E'&&a[i+1]=='A')) {
				ok2 = 1;
				break;
			}
		}
		return ok1 || ok2;
	}
}

void result() {
	for (int i=1;i<=n;i++)
		cout << a[i];
	cout << endl;
}

void Try(int i) {
	for (char j='A';j<=c;j++) {
		if (!used[(int)j]) {
			a[i] = j;
			used[(int)j] = 1;
			if (i==n && check())
				result();
			else Try(i+1);
			used[(int)j] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	cin >> c;
	n = c - 'A' + 1;
	Try(1);
	return 0;
}