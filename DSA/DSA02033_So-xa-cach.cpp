#include <bits/stdc++.h>

using namespace std;

int a[100], n, used[100];

void result() {
	for (int i=1;i<=n;i++)
		cout << a[i];
	cout << endl;
}

bool check() {
	for (int i=1;i<n;i++)
		if (abs(a[i]-a[i+1])==1)
			return 0;
	return 1;
}

void Try(int i) {
	for (int j=1;j<=n;j++) {
		if (!used[j]) {
			a[i] = j;
			used[j] = 1;
			if (i==n && check())
				result();
			else Try(i+1);
			used[j] = 0;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		cin >> n;
		fill(used, used+100, 0);
		Try(1);
	}
	return 0;
}