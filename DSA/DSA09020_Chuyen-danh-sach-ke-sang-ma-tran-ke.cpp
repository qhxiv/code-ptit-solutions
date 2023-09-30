#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	int m[n+1][n+1] = {0};
	string s;
	cin.ignore();
	for (int i=1;i<=n;i++) {
		getline(cin, s);
		stringstream ss(s);
		while (ss >> s) {
			int j = stoi(s);
			m[i][j] = 1;
			m[j][i] = 1;
		}
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) cout << m[i][j] << ' ';
		cout << endl;
	}
	return 0;
}