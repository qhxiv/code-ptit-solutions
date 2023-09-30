#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int c1[100001] = {0};
		int n;
		cin >> n;
		int a[n][n];
		for (int i=0;i<n;i++) {
			int c2[100001] = {0};
			for (int j=0;j<n;j++) {
				cin >> a[i][j];
				c2[a[i][j]] = 1;
			}
			for (int i=1;i<=100000;i++) {
				c1[i] += c2[i];
			}
		}
		int count = 0;
		for (int i=0;i<=100000;i++)
			if (c1[i]==n)
				count++;
		cout << count << endl;
	}
	return 0;
}

