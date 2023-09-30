#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, k, b[100], a[100], cnt = 0;
bool ok = 1;

void ktao() {
	for (ll i=1;i<=n;i++)
		b[i] = 0;
}

void in() {
	ll sum = 0;
	for (ll i=1;i<=n;i++)
		sum += a[i]*b[i];
	if (sum==k) {
		cnt++;
		for (ll i=1;i<=n;i++)
			if (b[i]==1)
				cout << a[i] << " ";
		cout << endl;
	}
}

void sinh() {
	ll i = n;
	while (b[i]==1 && i>=1) {
		b[i] = 0;
		i--;
	}
	if (i==0)
		ok = 0;
	else b[i] = 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (ll i=1;i<=n;i++)
		cin >> a[i];
	ktao();
	while (ok) {
		in();
		sinh();
	}
	cout << cnt;
	return 0;
}