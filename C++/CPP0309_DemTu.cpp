#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		int count = 0;
		stringstream ss(s);
		string tmp;
		while (ss >> tmp)
			count++;
		cout << count << endl;
	}
	return 0;
}