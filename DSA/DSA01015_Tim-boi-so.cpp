#include <bits/stdc++.h>
#define ll long long

using namespace std;

int ok = 1, n = 18;
char a[100];
vector<ll> res;

void ktao() {
	a[n] = '9';
	for (int i=1;i<n;i++)
		a[i] = '0';
}

void sinh() {
	string s(a+1, a+n+1);
	res.push_back(stoll(s));
	int i = n;
	while (a[i]=='9' && i>=1) {
		a[i] = '0';
		i--;
	}
	if (i==0)
		ok = 0;
	else a[i] = '9';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	ktao();
	while (ok)
		sinh();
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		for (ll x : res)
			if (x%n==0) {
				cout << x << endl;
				break;
			}
	}
	return 0;
}