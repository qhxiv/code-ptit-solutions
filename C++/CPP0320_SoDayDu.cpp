#include <bits/stdc++.h>

using namespace std;

string check(string s) {
	int count[10] = {0};
	int n = s.size();
	for (int i=0; i<n; i++) {
		if (s[i]<'0' || s[i]>'9' || s[0]=='0')
			return "INVALID";
		count[s[i]-'0']++;
	}
	for (int i=0; i<10; i++)
		if (count[i]==0)
			return "NO";
	return "YES";
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
	return 0;
}