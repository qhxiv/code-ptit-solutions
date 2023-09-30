#include <bits/stdc++.h>

using namespace std;

int n, k, ok = 1, a[10000], b[10000];

void ktao() {
	for (int i=1;i<=k;i++)
		a[i] = i;
}

void in() {
	for (int i=1;i<=k;i++)
		cout << b[a[i]] << " ";
	cout << endl;
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

	cin >> n >> k;
	set<int> s;
	while (n--) {
		int x; cin >> x;
		s.insert(x);
	}
	n = s.size();
	if (n<k)
		return 0;
	int i = 1;
	for (int x : s) {
		b[i] = x;
		i++;
	}
	ktao();
	while (ok) {
		in();
		sinh();
	}
	return 0;
}