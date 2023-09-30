#include <bits/stdc++.h>

using namespace std;

void process(string &s) {
	if (s[0]>='a'&&s[0]<='z') {
		s[0] += 'A' - 'a';
	}
	for (int i=1;i<s.size();i++) {
		if (s[i]>='A'&&s[i]<='Z') {
			s[i] = s[i] - ('A'-'a');
		}
	}
}

void upper(string &s) {
	for (int i=0;i<s.size();i++) {
		if (s[i]>='a'&&s[i]<='z')
			s[i] += 'A' - 'a';
	}
}

int main() {
	string s, tmp;
	getline(cin, s);
	stringstream ss(s);
	vector<string> v;
	while (ss >> tmp) {
		v.push_back(tmp);
	}
	string res;
	for (int i=0;i<v.size()-1;i++) {
		process(v[i]);
		if (i==v.size()-2) {
			res += v[i];
		} else res += v[i] + " ";
	}
	upper(v.back());
	res += ", " + v.back();
	cout << res;
	return 0;
}
