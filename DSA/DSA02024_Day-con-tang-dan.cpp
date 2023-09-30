#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, k;
vector<ll> a, b;
vector<string> res;

void add() {
	string x = "";
	for (int i=1;i<=k;i++)
		x = x + to_string(a[b[i]]) + ' ';
	res.push_back(x);
}

void Try(ll i) {
	for (ll j=b[i-1]+1;j<=n;j++) {
		b[i] = j;
		if (i>1 && a[b[i]]<a[b[i-1]])
			continue;
		if (i==k)
			add();
		else Try(i+1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	if (n>1) {
		a.push_back(0);
		b.push_back(0);
		for (ll i=1;i<=n;i++) {
			ll x; cin >> x;
			a.push_back(x);
			b.push_back(0);
		}
		k = 2;
		while (k<=n) {
			Try(1);
			k++;
		}
		sort(res.begin(), res.end());
		for (string x : res)
			cout << x << endl;
	}
	return 0;
}