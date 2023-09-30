#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool checked[100001];

int solve(int s, int t) {
	queue<pair<int, int>> q;
	checked[s] = 1;
	q.push({s, 0});
	while (!q.empty()) {
		pair<int, int> top = q.front();
		q.pop();
		if (top.first == t) return top.second;
		if (top.first-1==t || top.first*2==t) return top.second + 1;
		int x = top.first - 1;
		int y = top.first * 2;
		if (!checked[x] && top.first > 1) {
			q.push({x, top.second+1});
			checked[x] = 1;
		}
		if (!checked[y] && top.first < t) {
			q.push({y, top.second+1});
			checked[y] = 1;
		}
	}
} 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int t; cin >> t;
	while (t--) {
		fill(checked, checked+10000, 0);
		int s, t;
		cin >> s >> t;
		cout << solve(s, t) << endl;
	}
}