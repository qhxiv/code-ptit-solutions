#include <bits/stdc++.h>

using namespace std;

int main() {
	int t; cin >> t;
	cin.ignore();
	while (t--) {
		string s;
		getline(cin, s);
		string a[1000];
		stringstream ss(s);
		string tmp;
		int cnt = -1;
		while (ss >> tmp) {
			cnt++;
			a[cnt] = tmp;
		}
		for (int i = cnt;i>=0;i--)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
