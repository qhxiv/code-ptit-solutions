#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	vector<int> st;
	string s, r[2];
	while (cin >> s) {
		if (s=="push") {
			int n; cin >> n;
			st.push_back(n);
		} else if (s=="show") {
			if (st.empty()) cout << "empty";
			else for (int x : st) cout << x << ' ';
			cout << endl;
		} else if (s=="pop") st.pop_back();
	}
	return 0;
}