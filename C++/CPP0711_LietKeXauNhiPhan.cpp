#include <iostream>

using namespace std;

bool check(int a[], int n) {
	for (int i=1;i<=n;i++) {
		if (a[i]==0)
			return 0;
	}
	return 1;
}

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n+1] = {0};
		while (!check(a, n)) {
			for (int i=1;i<=n;i++)
				cout << a[i];
			cout << " ";
			int i = n;
			while (a[i]==1) {
				a[i] = 0;
				i--;
			}
			a[i] = 1;
		}
		for (int i=1;i<=n;i++)
			cout << a[i];
		cout << endl;
	}
	return 0;
}
