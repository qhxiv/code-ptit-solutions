#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	deque<ll> d;
	ll q; cin >> q;
	string s;
	while (q--) {
		cin >> s;
		if (s=="PUSHFRONT") {
			ll x; cin >> x;
			d.push_front(x);
		} else if (s=="PRINTFRONT") {
			if (d.empty()) cout << "NONE\n";
			else cout << d.front() << endl;
		} else if (s=="POPFRONT") {
			if (!d.empty()) d.pop_front();
		} else if (s=="PUSHBACK") {
			ll x; cin >> x;
			d.push_back(x);
		} else if (s=="PRINTBACK") {
			if (d.empty()) cout << "NONE\n";
			else cout << d.back() << endl;
		} else if (s=="POPBACK") {
			if (!d.empty()) d.pop_back();
		}
	}
	return 0;
}