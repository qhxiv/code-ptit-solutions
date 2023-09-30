#include <bits/stdc++.h>

using namespace std;

int sum(string s) {
	int res = 0;
	for (int i=0;i<s.size();i++) {
		res += s[i] - '0';
	}
	if (res < 10)
		return res;
	return sum(to_string(res));
}

bool check(string s) {
	return sum(s) == 9;
}

int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		cout << check(s) << endl;
	}
	return 0;
}
