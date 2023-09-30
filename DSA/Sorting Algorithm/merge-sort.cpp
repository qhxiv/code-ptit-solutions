#include <bits/stdc++.h>
#define ll long long

using namespace std;

void merge(int a[], int l, int m, int r) {
	vector<int> x(a+l, a+m+1);
	vector<int> y(a+m+1, a+r+1);
	int i, j; i = j = 0;
	while (i<x.size() && j<y.size()) {
		if (x[i]<y[j]) {
			a[l] = x[i];
			i++;
		} else {
			a[l] = y[j];
			j++;
		}
		l++;
	}
	while (i<x.size()) {
		a[l] = x[i];
		i++; l++;
	}
	while (j<y.size()) {
		a[l] = y[j];
		j++; l++;
	}
}

void mergeSort(int a[], int l, int r) {
	if (l<r) {
		int m = (l+r)/2;
		mergeSort(a, l, m);
		mergeSort(a, m+1, r);
		merge(a, l, m, r);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int a[n];
	for (int &x : a)
		cin >> x;
	mergeSort(a, 0, n);
	for (int x : a)
		cout << x << " ";
	return 0;
}