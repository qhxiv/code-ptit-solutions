#include <bits/stdc++.h>
#define ll long long

using namespace std;

vector<string> res;
queue<string> q;

bool cmp(string a, string b) {
	return stoll(a)>stoll(b);
}

void init() {
	res.push_back("6");
	res.push_back("8");
	q.push("6");
	q.push("8");
	while (q.front().size()<15) {
		string top = q.front();
		q.pop();
		string x = top + "6";
		string y = top + "8";
		q.push(x);
		q.push(y);
		res.push_back(x);
		res.push_back(y);
	}
	sort(res.begin(), res.end(), cmp);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	init();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (string x : res) {
			if (x.size()>n) continue;
			cout << x << ' ';
		}
		cout << endl;
	}
	return 0;
}