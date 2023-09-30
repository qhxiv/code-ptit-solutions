#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int cnt[3] = {0};
		int n; cin >> n;
		while (n--) {
			int x; cin >> x;
			cnt[x]++;
		}
		for (int i=0;i<=2;i++)
			while (cnt[i]--)
				cout << i << " ";
		cout << endl;
	}
	return 0;
}