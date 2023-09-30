#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k, a[100], ok;

void ktao() {
	ok = 1;
	for (int i=1;i<=k;i++)
		a[i] = i;
}

void in() {
	for (int i=1;i<=k;i++)
		cout << a[i];
	cout << " ";
}

void sinh() {
	int i = k;
	while (a[i]==i+n-k && i>=1)
		i--;
	if (i==0)
		ok = 0;
	else {
		a[i]++;
		for (int j=i+1;j<=k;j++)
			a[j] = a[j-1] + 1;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		cin >> n >> k;
		ktao();
		while (ok) {
			in();
			sinh();
		}
		cout << endl;
	}
	return 0;
}