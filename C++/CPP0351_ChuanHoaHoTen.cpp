#include <bits/stdc++.h>

using namespace std;

string chuanhoa(int n, string s) {
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while (ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		for (int i=1;i<tmp.size();i++)
			tmp[i] = tolower(tmp[i]);
		v.push_back(tmp);
	}
	string res = "";
	if (n==1) {
		res += v.back();
		v.erase(v.end()-1);
		for (string x : v) {
			res += " " + x;
		}
		return res;
	}
	res += v.front();
	v.erase(v.begin());
	reverse(v.begin(), v.end());
	for (string x : v) {
		res = x + " " + res;
	}
	return res;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s;
		cin.ignore();
		getline(cin, s);
		cout << chuanhoa(n, s) << endl;
	}
	return 0;
}
