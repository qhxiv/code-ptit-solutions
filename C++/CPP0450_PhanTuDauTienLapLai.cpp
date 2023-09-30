#include <iostream>

using namespace std;

int count[1000001];

int solve(int a[], int n, int count[]) {
	for (int i=0;i<n;i++) {
		count[a[i]]++;
		if (count[a[i]]==2)
			return a[i];
	}
	return -1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		for (int i=0;i<=1000000;i++) count[i] = 0;
		int n;
		cin >> n;
		int a[n];
		for (int i=0;i<n;i++)
			cin >> a[i];
		cout << solve(a, n, count) << endl;
	}
	return 0;
}

