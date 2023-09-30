#include <iostream>

using namespace std;

void selectionSort(int a[], int n) {
	for (int i=0; i<n-1; i++) {
		int m = i;
		for (int j=i+1; j<n; j++)
			if (a[m]>a[j])
				m = j;
		int tmp = a[i];
		a[i] = a[m];
		a[m] = tmp;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i=0; i<n; i++)
			cin >> a[i];
		selectionSort(a, n);
		int l = 0, r = n-1;
		while (l<r) {
			cout << a[r] << " " << a[l] << " ";
			l++; r--;
		}
		if (l==r) cout << a[l];
		cout << endl;
	}
	return 0;
}
