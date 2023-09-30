#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		map<char, int> mp;
		string s; getline(cin, s);
		for (int i=0;i<s.size();i++) {
			mp[s[i]]++;
		}
		bool check = 1;
		for (auto x : mp) {
			if (x.second>1 && s.size()-x.second<x.second-1) {
				cout << "0\n";
				check = 0;
				break;
			}
		}
		if (check)
			cout << "1\n";
	}
	return 0;
}
