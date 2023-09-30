#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int cnt[200] = {0};
		for (char x : s)
			cnt[(int)x]++;
		int m = -1;
		for (char i='a';i<='z';i++)
			m = max(m, cnt[(int)i]);
		if (s.size()-m >= m-1)
			cout << 1;
		else cout << -1;
		cout << endl;
	}
	return 0;
}