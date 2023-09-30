#include <bits/stdc++.h>

using namespace std;

int cmp(const void *a, const void *b) {
	int *x = (int*)a;
	int *y = (int*)b;
	if (*x < *y) return -1;
	return 1;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, min = 1e9+1;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++)
			cin >> a[i];
		qsort(a, n, sizeof(int), cmp);
		for (int i=1; i<n; i++)
			if (min > a[i]-a[i-1])
				min = a[i]-a[i-1];
		cout << min << endl;
	}
	return 0;
}
