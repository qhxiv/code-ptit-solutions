#include <bits/stdc++.h>

using namespace std;

int cmp (const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		n += m;
		int a[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}
		qsort(a, n, sizeof(int), cmp);
		for (int i=0;i<n;i++)
			cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}

