#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, a[100], k, ok = 1;

void ktao() {
	for (int i=1;i<=k;i++)
		a[i] = 0;
}

void in() {
	for (int i=1;i<=k;i++)
		cout << a[i] << " ";
	int h = k;
	if (n%2==1)
		h--;
	for (int i=h;i>=1;i--)
		cout << a[i] << " ";
	cout << endl;
}

void sinh() {
	int i = k;
	while (a[i]==1 && i>=1) {
		a[i] = 0;
		i--;
	}
	if (i==0)
		ok = 0;
	else a[i] = 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	if (n==1)
		cout << 0 << endl << 1;
	else {
		k = n/2;
		if (n%2==1)
			k++;
		while (ok) {
			in();
			sinh();
		}
	}
	return 0;
}