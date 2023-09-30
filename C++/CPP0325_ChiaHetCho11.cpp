#include <bits/stdc++.h>

using namespace std;

bool check(string n) {
	int p = 1, sum = 0;
	for (int i=0;i<n.size();i++) {
		int r = n[i] - '0';
		sum += p*r;
		p *= -1;
	}
	return (sum%11 == 0);
}

int main() {
	int t; cin >> t;
	while (t--) {
		string n; cin >> n;
		cout << check(n) << endl;
	}
	return 0;
}
