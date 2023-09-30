#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, ok, a[100];

void ktao() {
	ok = 1;
	for (int i=1;i<=n;i++)
		a[i] = i;
}

void in() {
	for (int i=1;i<=n;i++)
		cout << a[i];
	cout << " ";
}

void sinh() {
	int i = n-1;
	while (a[i]>a[i+1] && i>=1)
		i--;
	if (i==0)
		ok = 0;
	else {
		int j = n;
		while (a[j]<a[i])
			j--;
		swap(a[i], a[j]);
		reverse(a+i+1, a+n+1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n==0)
			continue;
		ktao();
		while (ok) {
			in();
			sinh();
		}
		cout << endl;
	}
	return 0;
}