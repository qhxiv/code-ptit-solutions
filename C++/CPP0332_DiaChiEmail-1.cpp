#include <bits/stdc++.h>

using namespace std;

void lower(string &s) {
	for (int i=0;i<s.size();i++) {
		if (s[i]>='A'&&s[i]<='Z') {
			s[i] = s[i] - ('A'-'a');
		}
	}
}

int main() {
		string s, tmp;
		getline(cin, s);
		vector<string> v;
		stringstream ss(s);
		while (ss >> tmp) {
			lower(tmp);
			v.push_back(tmp);
		}
		string mail = v.back();
		for (int i=0;i<v.size()-1;i++) {
			mail += v[i][0];
		}
		mail += "@ptit.edu.vn";
		cout << mail;
	return 0;
}
