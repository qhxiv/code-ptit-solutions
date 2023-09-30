#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		queue<string> q;
		vector<string> v;
		string s = "1";
		q.push(s);
		v.push_back(s);
		while (v.size()<n) {
			string x = q.front();
			q.pop();
			string y = x + '0';
			string z = x + '1';
			v.push_back(y);
			v.push_back(z);
			q.push(y); q.push(z);
		}
		for (int i=0;i<n;i++) cout << v[i] << ' ';
		cout << endl;
	}
	return 0;
}