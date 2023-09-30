#include <bits/stdc++.h>

using namespace std;

vector<string> v;
int n, k, a[100];

void result() {
	for (int i=1;i<=k;i++)
		cout << v[a[i]-1] << ' ';
	cout << endl;
}

void Try(int i) {
	for (int j=a[i-1]+1;j<=n;j++) {
		a[i] = j;
		if (i==k)
			result();
		else Try(i+1);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	cin.ignore();
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	set<string> se;
	while (ss >> tmp)
		se.insert(tmp);
	v.assign(se.begin(), se.end());
	n = v.size();
	if (n<k)
		return 0;
	else Try(1);
	return 0;
}