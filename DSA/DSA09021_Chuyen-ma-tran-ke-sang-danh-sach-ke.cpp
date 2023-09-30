#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	vector<int> v[n+1];
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++) {
			int x; cin >> x;
			if (x==1) v[i].push_back(j);
		}
	for (int i=1;i<=n;i++) {
		for (int x : v[i]) cout << x << ' ';
		cout << endl;
	}
	return 0;
}