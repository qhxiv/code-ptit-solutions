#include <iostream>
#define ll long long

using namespace std;

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int i=0;i<n;i++)
			cin >> a[i];
		qsort(a, n, sizeof(int), cmp);
		int l = 0, r = n-1;
		while (l<=r) {
			if (l==r)
				cout << a[l];
			else {
				cout << a[r] << " " << a[l] << " ";
			}
			l++; r--;
		}
		cout << endl;
	}
	return 0;
}

