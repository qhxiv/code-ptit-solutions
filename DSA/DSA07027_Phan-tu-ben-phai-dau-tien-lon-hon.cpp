#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		stack<int> st;
		int n; cin >> n;
		int a[n], b[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (st.empty()) st.push(i);
			else {
				while (!st.empty() && a[st.top()]<a[i]) {
					b[st.top()] = a[i];
					st.pop();
				}
				st.push(i);
			}
		}
		while (!st.empty()) {
			b[st.top()] = -1;
			st.pop();
		}
		for (int x : b) cout << x << ' ';
		cout << endl;
	}
	return 0;
}