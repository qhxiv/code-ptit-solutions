#include <bits/stdc++.h>

using namespace std;

void Try(int n, char a, char b, char c) {
	if (n==1)
		cout << a << " -> " << c << endl;
	else {
		Try(n-1, a, c, b);
		Try(1, a, b, c);
		Try(n-1, b, a , c);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	int n; cin >> n;
	Try(n, 'A', 'B', 'C');
	return 0;
}