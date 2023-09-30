#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, s, a[200], ok;
ll v[200], w[200], mv = -1, value, weight;
vector<int> mt;

void solve() {
	value = 0;
	weight = 0;
	for (int i=1;i<=n;i++) {
		value += v[i]*a[i];
		weight += w[i]*a[i];
	}
	if (weight<=s && mv < value) {
		vector<int> tmp(a+1, a+n+1);
		mt = tmp;
		mv = value;
	}
}

void generate() {
	int i = n;
	while (a[i]==1 && i>0) {
		a[i] = 0;
		i--;
	}
	if (i==0) ok = 0;
	else a[i] = 1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	
	cin >> n >> s;
	fill(a, a+n, 0); ok = 1;
	fill(mt.begin(), mt.end(), 0);
	mv = -1;
	for (int i=1;i<=n;i++) cin >> v[i];
	for (int i=1;i<=n;i++) cin >> w[i];
	while (ok) {
		solve();
		generate();
	}
	cout << mv << endl;
	for (int i=0;i<n;i++) cout << mt[i] << ' ';
	return 0;
}