#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	stack<int> st;
	int q, x;
	cin >> q;
	string s;
	while (q--) {
		cin >> s;
		if (s=="PUSH") {
			cin >> x;
			st.push(x);
		} else if (s=="PRINT") {
			if (!st.empty()) cout << st.top();
			else cout << "NONE";
			cout << endl;
		} else if (s=="POP" && !st.empty()) st.pop();
	}
	return 0;
}