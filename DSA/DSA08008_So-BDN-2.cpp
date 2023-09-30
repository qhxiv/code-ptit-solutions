#include <bits/stdc++.h>
#define ll long long

using namespace std;

int find_pos(vector<ll> v, ll x) {
	int res = -1, l = 0, r = v.size()-1;
	while (l<=r) {
		int m = (l+r)/2;
		if (v[m]>=x) {
			res = m;
			r = m - 1;
		} else l = m + 1;
	}
	return res;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	queue<string> q;
	vector<ll> res;
	q.push("1");
	while (q.front().size() < 20) {
		string top = q.front();
		q.pop();
		res.push_back(stoll(top));
		q.push(top + '0');
		q.push(top + '1');
	}
	int r = res.size() - 1;
	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		int l = find_pos(res, n);
		for (int i=l;i<=r;i++) 
			if (res[i]%n==0) {
				cout << res[i];
				break;
			}
		cout << endl;
	}
}