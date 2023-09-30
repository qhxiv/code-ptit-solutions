#include <iostream>

using namespace std;

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}
		qsort(a, n, sizeof(int), cmp);
		cout << a[k-1] << endl;
	}
	return 0;
}
