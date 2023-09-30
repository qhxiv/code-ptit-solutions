#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, ok;
char a[100];

void ktao() {
	ok = 1;
	for (int i=1;i<=n;i++)
		a[i] = 'A';
}

void in() {
	for (int i=1;i<=n;i++)
		cout << a[i];
	cout << " ";
}

void sinh() {
	int j = n;
	while (a[j]=='B' && j>=1) {
		a[j] = 'A';
		j--;
	}
	if (j==0)
		ok = 0;
	else a[j] = 'B';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		cin >> n;
		ktao();
		while (ok) {
			in();
			sinh();
		}
		cout << endl;
	}
	return 0;
}