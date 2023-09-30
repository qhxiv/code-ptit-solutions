#include <bits/stdc++.h>

using namespace std;

int cmp (const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		int a[n]; int idx = n;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i]==x && idx>i)
				idx = i;
		}
		if (idx==n) idx = -2;
		cout << idx + 1 << endl;
	}
	return 0;
}

