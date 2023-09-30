#include <bits/stdc++.h>

using namespace std;

int n, ok = 1, a[100];

void ktao() {
	for (int i=3;i<=n-1;i++)
		a[i] = 6;
}

bool check() {
	for (int i=2;i<=n;i++)
		if (a[i]==a[i-1] && a[i]==8)
			return 0;
	int rec = -1, cnt = 0;
	for (int i=2;i<=n;i++) {
		if (a[i]==6)
			cnt++;
		else {
			rec = max(rec, cnt);
			cnt = 0;
		}
	}
	rec = max(rec, cnt);
	return rec <= 3;
}

void in() {
	for (int i=1;i<=n;i++)
		cout << a[i];
	cout << endl;
}

void sinh() {
	int i = n-1;
	while (a[i]==8 && i>=3) {
		a[i] = 6;
		i--;
	}
	if (i==2)
		ok = 0;
	else a[i] = 8;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	a[1] = 8;
	a[2] = a[n] = 6;
	if (n<6)
		return 0;
	ktao();
	while (ok) {
		if (check())
			in();
		sinh();
	}
	return 0;
}