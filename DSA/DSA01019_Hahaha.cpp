#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, ok; char a[100];

void ktao() {
	n -= 3;
	ok = 1;
	for (int i=1;i<=n;i++)
		a[i] = 'A';
}

void in() {
	bool ok = 1;
	for (int i=1;i<n;i++)
		if (a[i]=='H' && a[i+1]=='H')
			ok = 0;
	if (ok) {
		cout << "HA";
		for (int i=1;i<=n;i++)
			cout << a[i];
		cout << "A\n";
	}
}

void sinh() {
	int i = n;
	while (a[i]=='H' && i>=1) {
		a[i] = 'A';
		i--;
	}
	if (i==0)
		ok = 0;
	else a[i] = 'H';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	a[0] = 'A';
	while (t--) {
		cin >> n;
		if (n==2) {
			cout << "HA\n";
			continue;
		} else if (n==3) {
			cout << "HAA\n";
			continue;
		} else {
			ktao();
			while (ok) {
				in();
				sinh();
			}
		}
	}
	return 0;
}