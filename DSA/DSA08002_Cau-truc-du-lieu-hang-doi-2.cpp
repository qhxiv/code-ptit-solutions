#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	queue<int> q;
	while (n--) {
		string s; cin >> s;
		if (s == "PUSH") {
			int x; cin >> x;
			q.push(x);
		} else if (s == "PRINTFRONT") {
			if (q.empty()) cout << "NONE\n";
			else cout << q.front() << endl;
		} else if (s == "POP") {
			if (!q.empty()) q.pop();
		}
	}
}