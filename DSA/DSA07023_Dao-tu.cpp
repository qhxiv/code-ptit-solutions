#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	cin.ignore(); string s;
	while (t--) {
		stack<string> st;
		getline(cin, s);
		stringstream ss(s);
		while (ss >> s) st.push(s);
		while (!st.empty()) {
			cout << st.top() << ' ';
			st.pop();
		}
		cout << endl;
	}
	return 0;
}