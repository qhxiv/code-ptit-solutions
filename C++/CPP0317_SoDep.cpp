#include <bits/stdc++.h>

using namespace std;

bool check(string s) {
	int l = 0, r = s.size() - 1;
	while (l<r) {
		int dl = s[l] - '0';
		int dr = s[r] - '0';
		if (dl%2!=0 || dr%2!=0)
			return 0;
		if (s[l]!=s[r])
			return 0;
		l++;
		r--;
	}
	return 1;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		cin >> s;
		if (check(s))
			cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}