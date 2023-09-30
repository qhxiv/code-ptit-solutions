#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> v = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int i = 9, cnt = 0;
		while (n) {
			if (n < v[i])
				i--;
			else {
				cnt += n/v[i];
				n %= v[i];
			}
		}
		cout << cnt << endl;
	}
	return 0;
}