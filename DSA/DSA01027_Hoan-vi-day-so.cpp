#include <bits/stdc++.h>

using namespace std;

int a[1000], n, ok = 1;

void in() {
	for (int i=1;i<=n;i++)
		cout << a[i] << " ";
	cout << endl;
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

	cin >> n;
	for (int i=1;i<=n;i++)
		cin >> a[i];
	sort (a+1, a+n+1);
	while (ok) {
		in();
		sinh();
	}
	return 0;
}