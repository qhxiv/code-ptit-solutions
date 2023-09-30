#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k, s, a[100], cnt, ok;

void check() {
	int x = 0;
	for (int i=1;i<=k;i++) x += a[i];
	if (x==s) cnt++;
}

void generate() {
	int i = k;
	while (a[i]==i+n-k && i>0) i--;
	if (i==0) ok = 0;
	else {
		a[i]++;
		for (int j=i+1;j<=n;j++) a[j] = a[j-1]+1;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	while (1) {
		cin >> n >> k >> s;
		if (n==0 && k==0 && s==0) break;
		cnt = 0;
		if (k<=n) {
			ok = 1;
			for (int i=1;i<=k;i++) a[i] = i;
			while (ok) {
				check();
				generate();
			}
		}
		cout << cnt << endl;
	}
	return 0;
}