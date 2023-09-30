#include <bits/stdc++.h>

using namespace std;

int n, k, ok = 1, a[100];

void ktao() {
	for (int i=1;i<=k;i++)
		a[i] = i;
}

void in(vector<string> v) {
	for (int i=1;i<=k;i++)
		cout << v[a[i]-1] << " ";
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
	set<string> s;
	for (int i=0;i<n;i++) {
		string x;
		cin >> x;
		s.insert(x);
	}
	if (s.size()<k)
		cout << -1;
	else {
		n = s.size();
		vector<string> v(s.begin(), s.end());
		ktao();
		while (ok) {
			in(v);
			sinh();
		}
	}
	return 0;
}