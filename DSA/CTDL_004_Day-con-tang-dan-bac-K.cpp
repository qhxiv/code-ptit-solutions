#include <bits/stdc++.h>

using namespace std;

int n, k, a[1000], b[1000], ok = 1;

void ktao() {
	for (int i=1;i<=k;i++)
		a[i] = i;
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

bool check() {
	for (int i=1;i<k;i++)
		if (b[a[i]]>b[a[i+1]])
			return 0;
	return 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (int i=1;i<=n;i++)
		cin >> b[i];
	ktao();
	int cnt = 0;
	while (ok) {
		if (check()) {
			cnt++;
		}
		sinh();
	}
	cout << cnt;
	return 0;
}