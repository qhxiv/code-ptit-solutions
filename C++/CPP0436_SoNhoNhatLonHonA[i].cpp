#include <iostream>
#include <map>

using namespace std;

int cmp (const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n], b[n], max = -1e9;
		map<int, int> m;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			b[i] = a[i];
			if (max < a[i])
				max = a[i];
		}
		qsort(b, n, sizeof(int), cmp);
		for (int i=0;i<n;i++) {
			m[b[i]]=i;
		}
		for (int i=0;i<n;i++) {
			if (a[i]==max)
				cout << "_ ";
			else cout << b[m[a[i]]+1] << " ";
		}
		cout << endl;
	}
	return 0;
}
