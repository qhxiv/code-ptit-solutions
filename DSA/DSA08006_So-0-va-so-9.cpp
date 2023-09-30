#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		if (n==0) continue;
		string s = "9";
		queue<string> q;
		q.push(s);
		ll x = stoll(q.front());
		while (x%n!=0) {
			string top = q.front();
			q.pop();
			q.push(top + '0');
			q.push(top + '9');
			x = stoll(q.front());
		}
		cout << x << endl;
	}
	return 0;
}