#include <bits/stdc++.h>

using namespace std;

bool check(string s) {
	if (s.size()<2)
		return 0;
	string tmp = s;
	reverse(s.begin(), s.end());
	return s==tmp;
}

struct cmp {
	bool operator() (string a, string b) {
		int as = a.size(), bs = b.size();
		if (as == bs) {
			return a > b;
		}
		return as > bs;
	}
};

int main() {
	map<string, int, cmp> mp;
	string s;
	while (cin>>s) {
		if (check(s))
			mp[s]++;
	}
	for (auto x : mp) {
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}
