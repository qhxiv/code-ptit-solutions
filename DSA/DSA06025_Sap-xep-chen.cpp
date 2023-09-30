#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	for (int i=0;i<n;i++) {
		cout << "Buoc " << i << ": ";
		int p = 0;
		while (a[p]<a[i])
			p++;
		if (p!=i) {
			int tmp = a[i];
			for (int j=i;j>p;j--)
				a[j] = a[j-1];
			a[p] = tmp;
		}
		for (int j=0;j<=i;j++)
			cout << a[j] << " ";
		cout << endl;
	}
	return 0;
}