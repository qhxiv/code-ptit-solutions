#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	for (int i=0;i<n-1;i++) {
		cout << "Buoc " << i+1 << ": ";
		int m = i;
		for (int j=i+1;j<n;j++)
			if (a[j]<a[m])
				m = j;
		swap(a[i], a[m]);
		for (int j=0;j<n;j++)
			cout << a[j] << " ";
		cout << endl;
	}
	return 0;
}