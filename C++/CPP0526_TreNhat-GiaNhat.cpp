#include <bits/stdc++.h>

using namespace std;

void input(pair<string, string> x, pair<string, string> &y) {
	y.second = x.first;
	string s = x.second, tmp = "";
	tmp += s.substr(6) += s.substr(3, 2) += s.substr(0, 2);
	y.first = tmp;
}

int main() {
	int n; cin >> n;
	vector<pair<string, string>> v(n);
	for (int i=0;i<n;i++) {
		pair<string, string> x;
		cin >> x.first >> x.second;
		input(x, v[i]);
	}
	sort(v.begin(), v.end());
	cout << v.back().second << endl << v.front().second;
	return 0;
}
